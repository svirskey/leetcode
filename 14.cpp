#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string ret = "";
        string first = strs[0];
        for (int i = 0; i < first.size(); i++)
        {
            for (string &str : strs)
            {
                if (str[i] != first[i])
                    return ret;
            }
            ret +=first[i];
        }
        return ret;
    }
};

int main()
{
    Solution s;
    vector<string> v = {"flower", "flow", "flight"};
    cout << s.longestCommonPrefix(v)<< endl;
}