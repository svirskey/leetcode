#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int res,
            v_size = nums.size();

        sort(nums.begin(), nums.end());
        res = nums[0] + nums[1] + nums[2];

        for (int i = 0 ; i < v_size; i++)
        {
            int left = i + 1,
                right = v_size - 1;

            while (left < right)
            {
                int cur = nums[i] + nums[left] + nums[right];
                
                if (abs(target - cur) < abs(target - res))
                    res = cur;
                else
                {
                    if (cur > target)
                        right--;
                    else
                        left++;
                }
                if (res == target)
                    return target;
            }
        }
        return res;
    }
};


int main()
{
    Solution s;

    vector<int> v = {4,0,5,-5,3,3,0,-4,-5};
    cout << s.threeSumClosest(v, -2) << endl;
}