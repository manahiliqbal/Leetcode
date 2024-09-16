class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m = piles[0];
        for (int i=1; i<piles.size(); i++){
            m = max(m, piles[i]);
        }

        int start = 1, end = m;
        while (start < end) {
            int mid = start + (end - start) / 2;
            int sum = 0;
            
            for (int i = 0; i < piles.size(); i++) {
                sum += (piles[i] + mid - 1) / mid;  
            }
            if (sum > h) {
                start = mid + 1;
            } 
            else {  
                end = mid;
            }
        }
        return start;
    }
};
