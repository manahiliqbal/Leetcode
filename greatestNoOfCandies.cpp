class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> kids(candies.size());
        for (int i=0; i<candies.size(); i++){
            kids[i] = (candies[i] + extraCandies >= maxCandies);
        }
        return kids;
    }
};
