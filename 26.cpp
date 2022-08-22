#include <vector>

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int to = 0;
        for (int from = 1; from < nums.size(); from++)
        {
            if (nums[from] != nums[to])
            {
                nums[to + 1] = nums[from];
                to++;
            }
        }
        return (to + 1);
    }
};