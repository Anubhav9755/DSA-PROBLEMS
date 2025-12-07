class Solution {
public:
    int countOdds(int low, int high) {
       int i = low;
       int cnt=0;
       while(i<=high){
        if(i%2!=0)
            cnt++;
        i++;
       } 
       return cnt;
    }
};