#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    bool isIsomorphic(string s, string t) 
    {
        int strS[256],
            strT[256];

        for (int i = 0; i < 256 ; i++)
            strS[i] = strT[i] = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (strS[s[i]] != 0 && strS[s[i]] != t[i])
                return false;
            else if (strT[t[i]] != 0 && strT[t[i]] != s[i])
                return false;
            else
            {
                strS[s[i]] = t[i];
                strT[t[i]] = s[i];
            }      
        }

        return true;
    }
};