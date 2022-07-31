#include <vector>
#include <iostream>
#include <unordered_set>
#include <string>
#include <algorithm>

class Solution 
{
    public:

    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) 
    {
        std::vector<std::vector<int>> ret;
        int sz = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < sz; i++)
        {
            int left = i + 1, 
                right = sz - 1;
                
            while (left < right)
            {
                int sum = nums[left] + nums[right];

                if (sum > -nums[i])
                    right--;
                else if (sum < -nums[i])
                    left++;
                else
                {
                    ret.push_back({nums[i], nums[left], nums[right]});

                    int oldLeft = left,
                        oldRight = right;
                    while (left < right && nums[right] == nums[oldRight])
                        right--;
                    while (left < right && nums[left] == nums[oldLeft])
                        left++;
                    while (i + 1 < sz && nums[i] == nums[i + 1])
                        i++;
                }
            }
        }  
        return ret;
    }
};

int main()
{
    std::string s1= "12345",
                s2 = "12345";
    std::cout << std::hash<std::string>{}(s1) << std::endl << std::hash<std::string>{}(s2);
    
}