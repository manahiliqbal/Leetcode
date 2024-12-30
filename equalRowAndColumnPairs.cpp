class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<string, int> rowCount, colCount;
        for (int i=0;i<n;i++) {
            string rowHash;
            for (int j=0;j<n;j++) {
                rowHash += to_string(grid[i][j]) + " ";
            }
            rowCount[rowHash]++;
        }
    
        for (int i=0; i<n; i++) {
            string colHash;
            for (int j=0; j<n; j++) {
                colHash += to_string(grid[j][i]) + " ";
            }
            colCount[colHash]++;
        }    
        int result = 0;
        for (const auto [rowHash, rowFreq] : rowCount) {
            if (colCount.find(rowHash) != colCount.end()) {
                result += rowFreq * colCount[rowHash];
            }
        }
        return result;
    }
};
