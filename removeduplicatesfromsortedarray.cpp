class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> nums2;
        int count = 1;
        nums2.push_back(nums[0]);
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[i-1] != nums[i])
            {
               nums2.push_back(nums[i]);
               count++;
            }
            else
            {
                continue;
            }
        }
        for (int j=0; j<count; j++)
        {
           nums[j] = nums2[j]; 
        }
        return count;
    }
};