class Solution {
public:
  int distributeCandies(vector<int>& candyType) {
    unordered_set<int> uniqueCandies;
    for (int type : candyType) {
      if (!uniqueCandies.count(type)) {  
        uniqueCandies.insert(type);
      }
    }
 
    return min(uniqueCandies.size(), candyType.size() / 2);  
  }
};
