class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        if (n<10) return {};
        unordered_map <string, int> hmap;
        vector <string> vec;
        
        for (int i=0; i<=n-10; i++){
            string sub = s.substr(i, 10);
            hmap[sub]++;
        }
        
        for (auto &pair: hmap){
            if(pair.second>1){
                vec.push_back(pair.first);
            }
        }
        return vec;
    }
};
