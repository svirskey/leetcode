#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) 
    {
        int len = nums.size();
        int i = 0;
        while (i < len)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[len - 1];
                len--;
            }
            else 
                i++;
        }
        return (len);
    }
};