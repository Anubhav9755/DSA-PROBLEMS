class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i:nums){
            mp[i]++;
        }

        for(auto &[key,value] : mp){
            if(value >= 2)
                return true;
        }

        return false;
    }
};