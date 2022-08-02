#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution 
{
    public:

    string longestPalindrome(string s) 
    {
        string t(2 * s.length() + 1, '_');
		vector<int> radii(t.length(), 0);
		int radius;

		for (int i = 0; i < s.length(); i++)
			t[2 * i + 1] = s[i];

		for (int i = 0; i < t.length(); i++)
		{
			radius = 0;
			while (i - (radius + 1) >= 0 && i + (radius + 1) < t.length() && t[i - (radius + 1)] == t[i + (radius + 1)])
				radius++;
			radii[i] = radius;
		}

		int r = radii[0], indR = 0;
		for (int i = 0; i < t.length(); i++)
		{
			if (radii[i] > r)
			{
				r = radii[i];
				indR = i;
			}
		}
		return s.substr((indR - r) / 2, r);
    }
};