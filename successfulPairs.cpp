class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = spells.size();
        vector<int> pairs;
        int m = potions.size();
        int i=0;
        int mid;
        for (int spell : spells){
            long long required = (success + spell - 1) / spell;
            auto it = lower_bound(potions.begin(), potions.end(), required);
            int count = potions.end() - it;
            pairs.push_back(count);
        }
        return pairs;
    }
};
