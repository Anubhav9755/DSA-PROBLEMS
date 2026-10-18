class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefixSum = 0;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                prefixSum++;
            }

            result += mp[prefixSum - k];
            mp[prefixSum]++;
        }

        return result;
    }
};