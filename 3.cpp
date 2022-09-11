#include <iostream>
#include <string>
#include <array>

class Solution 
{
    public:

    int lengthOfLongestSubstring(std::string s) 
    {
        int best = 0, 
            curr = 0, 
            len = s.length();
        std::array<int, 128> arr;

        for (auto &el : arr)
            el = -1;
        for (int i = 0; i < len; i++)
        {
            if (arr[s[i]] != -1)
                curr = std::min(curr + 1, i - arr[s[i]]);
            else
                curr++;

            arr[s[i]] = i;
            if (curr > best)
                best = curr;
        }    
        return best;
    }
};

int main()
{
    Solution s;
    std::string str = "pwwkewabcdef";
    std::cout << s.lengthOfLongestSubstring(str) << std::endl;
}