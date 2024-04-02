class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length()!=t.length())
           return false;
        unordered_map<char, char> s_2_t; 
        unordered_map<char, char> t_2_s; 
        for (size_t i=0; i<s.length(); i++)
        {
            char s_char = s[i];
            char t_char = t[i];

            if (s_2_t.find(s_char) != s_2_t.end())
            {
                if (s_2_t[s_char]!=t_char)
                    return false;
            }
            else
            {
               s_2_t[s_char] = t_char; 
            }

            if (t_2_s.find(t_char) != t_2_s.end())
            {
                if (t_2_s[t_char]!=s_char)
                    return false;
            }
            else
            {
               t_2_s[t_char] = s_char; 
            }
        }
        return true;     
    }
};