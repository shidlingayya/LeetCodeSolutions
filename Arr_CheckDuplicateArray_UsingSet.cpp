#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
bool containsDuplicate(std::vector<int>& nums)
{
	std::set<int> mySet{};
	for (auto x : nums)
	{
		mySet.insert(x);
	}
	return (mySet.size() == nums.size() ? false:true);
}

int main()
{
	std::vector<int> myVect{ 1, 2, 3, 1 };
	std::cout << "contains duplicate? " << containsDuplicate(myVect) << std::endl;
	return 0;
}
