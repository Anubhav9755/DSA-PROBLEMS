class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>seen;
       seen[0]=1;
       int cur=0,count=0;
       for(int x:nums){
        cur+=x;
       
       if(seen.count(cur-k))
            count+=seen[cur-k];
        seen[cur]++; 
       }
    return count; 
       }
};