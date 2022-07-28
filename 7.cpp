#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    long long	ft_atol(string str)
    {
        long long	num;
        int			i;
        int			minus;

        minus = 1;
        i = 0;
        num = 0;
        if (str[i] == '-')
        {
            minus = -1;
            i++;
        }
        while (i < str.length() && str[i] >= '0' && str[i] <= '9' )
        {
            num *= 10;
            num += str[i] - 48;
            i++;
        }
        return (num * minus);
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
        long long rett = ft_atol(ret);
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