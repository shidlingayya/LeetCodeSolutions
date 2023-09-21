#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    static int removeDuplicates(std::vector<int>& nums)
    {
        std::vector<int>::iterator it = std::unique(nums.begin(), nums.begin() + nums.size());
        nums.resize(std::distance(nums.begin(), it));
        return nums.size();
    }
};

int main()
{
    std::vector<int> myVect1{ 1, 1, 2};
    std::cout << "UT1: " << Solution::removeDuplicates(myVect1) << std::endl;
    return 0;
}