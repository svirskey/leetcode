#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    long long ft_atol(const char *c) 
    {
        long long value = 0;
        int sign = 1;

        if( *c == '+' || *c == '-' ) 
        {
            if ( *c == '-' )
                sign = -1;
            c++;
        }
        while (isdigit(*c)) 
        {
            value *= 10;
            value += (int) (*c - '0');
            c++;
        }
        return value * sign;
}

    int reverse(int x) 
    {
        long long y = x;
        
        string ret;
        if (x < 0)
        {
            ret = "-";
            y = (long long)x * -1;
        }  
        string str = to_string(y);
        for (int i = 0; i < str.length() ; i++)
        {
            ret += str[str.length() - i - 1];
        }
        long long rett = ft_atol(ret.c_str());
        if (rett > INT_MAX || rett < INT_MIN)
            return 0;
        return rett;
    }
};

int main()
{
    int a = 123456;
    int b = -123456;
    int c = 2147483647;
    Solution s;
    cout << s.reverse(a) << endl << s.reverse(b) << endl <<s.reverse(c) << endl ;
}