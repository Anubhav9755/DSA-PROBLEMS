class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(char c: ransomNote){
            mp1[c]++;
        }

        for(char c: magazine){
            mp2[c]++;
        }

        for(auto& [key,value]: mp1 ){
            if (mp2[key] < value) {
            return false;
        }
    }
    return true;
}
};