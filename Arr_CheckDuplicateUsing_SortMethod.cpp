#include <iostream>
#include <algorithm>
#include <vector>
bool containsDuplicate(std::vector<int>& nums)
{
	std::sort(nums.begin(), nums.end());
	for (auto i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i] == nums[i + 1])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	std::vector<int> myVect{ 1, 2, 3, 1 };
	std::cout << "contains duplicate? " << containsDuplicate(myVect) << std::endl;
	return 0;
}
