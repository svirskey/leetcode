#include <string>
#include <iostream>

class Solution 
{
public:

    int myAtoi(std::string s) 
    {
        int i;
        long long value = 0;
        int sign = 1;

        while (isspace(s[i]))
            i++;
        if (s[i] == '+' || s[i] == '-') 
        {
            if( s[i] == '-' ) 
                sign = -1;
            i++;
        }
        while (isdigit(s[i]))
        {
            value *= 10;
            value += (int) (s[i] - '0');
            i++;
            if (value > INT_MAX)
                return (sign > 0) ? INT_MAX : INT_MIN;
        }
        return value * sign;
    }
};

int main()
{
    Solution s;
    std::cout << s.myAtoi("   +2147483647") << std::endl << s.myAtoi("   -2147483648");
}