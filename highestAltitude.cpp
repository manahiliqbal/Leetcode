class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = 0;
        int prefixSum = 0;
        for (int i=0; i<gain.size(); i++){
            prefixSum += gain[i];
            maxAlt = max(prefixSum, maxAlt);
        }
        return maxAlt;
    }
};
