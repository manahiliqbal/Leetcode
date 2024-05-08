class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sortedScores = score; 
        sort(sortedScores.rbegin(), sortedScores.rend()); 
        unordered_map<int, string> rankMap; 

    
        for (int i = 0; i < sortedScores.size(); ++i) {
            if (i == 0) {
                rankMap[sortedScores[i]] = "Gold Medal";
            } else if (i == 1) {
                rankMap[sortedScores[i]] = "Silver Medal";
            } else if (i == 2) {
                rankMap[sortedScores[i]] = "Bronze Medal";
            } else {
                rankMap[sortedScores[i]] = to_string(i + 1);
            }
        }

        vector<string> answer;
        for (int scores : score) {
            answer.push_back(rankMap[scores]);
        }
        return answer;   
    }
};