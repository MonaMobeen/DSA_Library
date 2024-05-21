class MyHashSet {
public:
    MyHashSet() {
       
        buckets_count = 1000;
        buckets.resize(buckets_count);
    }

    void add(int key) {
         
        int bucket_index = getBucketIndex(key);

        
        auto it = std::find(buckets[bucket_index].begin(), buckets[bucket_index].end(), key);
        if (it == buckets[bucket_index].end()) {
             
            buckets[bucket_index].push_back(key);
        }
    }

    void remove(int key) {
        int bucket_index = getBucketIndex(key);

   
        auto it = std::find(buckets[bucket_index].begin(), buckets[bucket_index].end(), key);
        if (it != buckets[bucket_index].end()) {
            
            buckets[bucket_index].erase(it);
        }
    }

    bool contains(int key) {
        int bucket_index = getBucketIndex(key);
        return std::find(buckets[bucket_index].begin(), buckets[bucket_index].end(), key) != buckets[bucket_index].end();
    }

private:
    int buckets_count;
    std::vector<std::vector<int>> buckets;  
    int getBucketIndex(int key) {
        return key % buckets_count;
    }
};
