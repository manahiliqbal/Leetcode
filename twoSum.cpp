class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());  

        int l = 0;
        int h = v.size() - 1;
        while (l < h) {
            if (v[l].first + v[h].first == target) {
                return {v[l].second, v[h].second};
            } else if (v[l].first + v[h].first > target) {
                h--;
            } else {
                l++;
            }
        }
        return {-1, -1};
    }
};
