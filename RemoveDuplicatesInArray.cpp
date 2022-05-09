#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeElement(vector<int>& nums, int val) 
{
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}

int main()
{
    std::vector<int> myArray{ 3, 2, 2, 3 };
    std::cout << "Remove occurances of 3 " << removeElement(myArray, 3) << std::endl;
    return 0;
}