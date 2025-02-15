class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>hashMap;
        
        for (char ch: magazine){
            hashMap[ch]++;
        }

        for(char ch: ransomNote){
            if (hashMap[ch]==0) return false;
            hashMap[ch]--;
        }
        return true;
    }
};
