class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        for (int i=0; i<k; i++)
        {
           make_heap(gifts.begin(), gifts.end());
           gifts[0] = floor(sqrt(gifts[0]));
        }
        long long int sum = 0;
        for (int i=0; i<gifts.size(); i++)
        {
            sum = sum + gifts[i];
        }
        return sum;
    }
};