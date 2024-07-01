// https : // leetcode.com/problems/contains-duplicate/

        class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                count = count + 1;
                ;
            }
            else
            {
                count = count;
            }
        }
        if (count >= 1)
        {
            return true;
        }
        return false;
    }
};