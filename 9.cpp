#include <iostream>
#include <string>

using namespace std;

class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        string str = to_string(x);
        int len = str.length();
        for (int i = 0; i < len / 2; i++)
        {
            if (str[i] != str[len - i - 1])
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sl;
    int x = -1234321;
    int y = 1234311;
    int z = 123321;
    cout << "x -> " << sl.isPalindrome(x) << "; y -> " << sl.isPalindrome(y) << "; z -> " << sl.isPalindrome(z) << endl;
}