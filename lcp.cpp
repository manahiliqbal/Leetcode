class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string longest_pre;
        sort(strs.begin(), strs.end());
        string first = strs[0]; 
        string last = strs[strs.size()-1];

        for (int i=0; i<first.length(); i++){
            if (i<last.size() && last[i] == first[i])
                longest_pre.push_back(first[i]);
            else
                break;  
        } 
        
        return longest_pre;    
    }
};


