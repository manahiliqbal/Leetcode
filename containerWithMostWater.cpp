class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int max_area=0;
        while (i<j){
            max_area = max((min(height[i], height[j]) * (j - i)), max_area);
            if (height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }    
        }
        return max_area;
    }
};
