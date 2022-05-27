class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int output[n];
        for(int i=1; i<n; i++){
            if(nums[i] != nums[k])  {
                 k += 1;
                nums[k] = nums[i];
            }
        }
        return k+1;
    }
};
