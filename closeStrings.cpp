class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }
        set<char> set1(word1.begin(), word1.end());
        set<char> set2(word2.begin(), word2.end());
        if (set1 != set2){
            return false;
        }
        map<char, int> word1count;
        for (char ch : word1) { 
            word1count[ch]++;
        } 
        vector<int> count1;
        for (const auto &pair : word1count) {
            count1.push_back(pair.second);
        }
        sort(count1.begin(), count1.end());
        map<char, int> word2count;
        for (char ch : word2) { 
            word2count[ch]++;
        } 
        vector<int> count2;
        for (const auto &pair : word2count) {
            count2.push_back(pair.second);
        }
        sort(count2.begin(), count2.end());
        if (count1 == count2) {
            return true;
        }
        else {
            return false;
        }
    }
};
