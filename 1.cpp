
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++)
        {
            umap.insert(make_pair(nums[i], i));
        }
        int diff;
        for (int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            if (umap.find(diff) != umap.end() && umap[diff] != i)
                return {i, umap[diff]};
        }
        return {0};
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
