class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7;

        long long even = 1;
        long long odd = 0;

        long long sum = 0;
        long long count = 0;

        for(int x:arr){
            sum+=x;

            if(sum%2==0){
                count+=odd;
                even++;
            }
            else{
                count+=even;
                odd++;
            }
            count%=MOD;
        }
        return count;
    }
};