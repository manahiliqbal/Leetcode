class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s1;
        int temp1, temp2, temp;
        int len = tokens.size();
        for (int i = 0; i < len; i++)
        {
            if (tokens[i] == "*" || tokens[i] == "+" || tokens[i] == "/" || tokens[i] == "-")
            {
                temp2 = s1.top();
                s1.pop();
                temp1 = s1.top();
                s1.pop();
                if (tokens[i] == "+")
                    temp = temp1 + temp2;
                else if (tokens[i] == "-")
                    temp = temp1 - temp2;
                else if (tokens[i] == "*")
                    temp = temp1 * temp2;
                else if (tokens[i] == "/")
                    temp = temp1 / temp2;
                s1.push(temp);
            }
            else
            {
                s1.push(stoi(tokens[i]));
            }
        }
        return s1.top();
    }
};