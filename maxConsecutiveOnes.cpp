class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0, max_len = 0, zeros_count = 0;

        for (int end = 0; end < nums.size(); end++) {
            if (nums[end] == 0) {
                zeros_count++;
            }
            while (zeros_count > k) {
                if (nums[start] == 0) {
                    zeros_count--;
                }
                start++; 
            }

            max_len = max(max_len, end - start + 1);
        }

        return max_len;
    }
};
