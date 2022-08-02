#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    bool isSubsequence(string s, string t) 
    {
        int s_ind = 0;

        for (int i = 0; i < t.length(); i++)
        {
            if (s[s_ind] == t[i])
                s_ind++;
        }
        return (s_ind == s.length()) ? true : false;
    }
};