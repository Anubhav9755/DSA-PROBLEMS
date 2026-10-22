class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        double sum =0;
        int length = INT_MAX;

        while(j < nums.size()){
            sum+=nums[j];
            while(sum>=target){
                length = min(length,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return length == INT_MAX ? 0 : length;
    }
};