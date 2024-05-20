class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         
        vector<int> shuffled(2 * n);
        
 
        int i = 0, j = n;
        
         
        for (int k = 0; k < 2 * n; k++) {
            if (k % 2 == 0) {
                shuffled[k] = nums[i++];  
            } else {
                shuffled[k] = nums[j++];  
            }
        }
        
        return shuffled;
    }
};
