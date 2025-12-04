class Solution {
public:
    int countCollisions(string S) {
        int nums=S.size();
        if (nums==1) return 0;
        int left=0, right=nums-1;
        while (S[left]=='L') 
            left++;
        while (left<right && S[right]=='R') 
            right--;
        if (left>=right) 
            return 0;
        int columns=0;
    
        for( ; left<=right; left++){
            while(S[left]=='R'){
                left++;
                columns++;
            }
            if (S[left]=='L') columns++;
        }
        return columns;      
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();