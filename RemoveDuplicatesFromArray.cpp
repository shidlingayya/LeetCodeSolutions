#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    std::set<int> mySet;
    for (auto i = 0U; i < nums.size(); i++)
    {
        mySet.insert(nums[i]);
    }

    nums.clear();
    for (auto x : mySet)
    {
        nums.push_back(x);
    }
    return mySet.size();
}

int main()
{
    std::vector<int> myArray{ 1, 1, 2 };
    std::cout << "size of unique elements: " << removeDuplicates(myArray) << std::endl;
    return 0;
}