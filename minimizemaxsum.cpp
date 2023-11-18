class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int n = nums.size();
        int j = n - 1;
        int sum = nums[0]+nums[j];
        for (int i=0; i<j; i++)
        {
            if (nums[i]+nums[j] > sum)
            {
                sum = nums[i] + nums[j];
            }
            j--;
        }
        return sum;
        
    }
};