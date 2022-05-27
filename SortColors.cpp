class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();
        int count[3] = {0};
        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        for(int i=1; i<3; i++){
            count[i] += count[i-1];
        }
        int output[n];
        for(int i=n-1; i>=0; i--){
            output[--count[nums[i]]]=nums[i];
        }
        for(int i=0; i<n; i++)
            nums[i] = output[i];
    }
};
