
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> c{ 3,3,6 };
    int target = 6;
    auto res = s.twoSum(c, target);
    for (auto el : res)
        cout << el << "\t";

}
