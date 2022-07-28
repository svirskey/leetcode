#include <string>
#include <iostream>
#include <stack>

using namespace std;

class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<int> lst;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                lst.push(0);
            else if (s[i] == '{')
                lst.push(1);
            else if (s[i] == '[')
                lst.push(2);
            if (lst.empty())
                return false;
            if (s[i] == ')')
            {
                
                if (lst.top() != 0)
                    return false;
                lst.pop();
            }   
            else if (s[i] == '}')
            {
                if (lst.top() != 1)
                    return false;
                lst.pop();
            }   
            else if (s[i] == ']')
            {
                if (lst.top() != 2)
                    return false;
                    lst.pop();
            }     
        }
        if (lst.empty())
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    string str = "[[(()])]";
    cout << s.isValid(str) << endl;
    str = "([[]])";
    cout << s.isValid(str) << endl;
}