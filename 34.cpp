#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> ret = {-1, -1};
        
        if (nums.empty())
            return ret;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                if (ret[0] == -1)
                    ret[0] = i;
                ret[1] = i;
            }
        }
        return ret;
    }
};

int main()
{

    vector<int> ex = {1,2,3,4, 5,6,7};
    Solution s;

    auto ret = s.searchRange(ex, 5);
    cout << ret[0] << '\t' << ret[1] << endl;
}