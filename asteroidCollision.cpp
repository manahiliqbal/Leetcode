class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        for (int i=0; i<asteroids.size(); i++){
            bool check = false;
            while (!st.empty() && asteroids[i]<0 && st.top()>0){
                if (abs(st.top()) < abs(asteroids[i])) {
                    st.pop();
                }
                else if (abs(st.top()) == abs(asteroids[i])) {
                    st.pop();  
                    check = true;
                    break;
                }
                else {
                    check = true;  
                    break;
                }    
            }
            if (!check) {
                st.push(asteroids[i]);
            }
        }
        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};
