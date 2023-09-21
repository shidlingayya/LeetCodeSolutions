#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    static void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) 
    {
        //Shrink the existing array to m size
        nums1.erase(nums1.begin() + m, nums1.end());     

        //Shrink the array2 to size n
        nums2.erase(nums2.begin() + n, nums2.end());

        //Insert Array2 into Array1
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        std::sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    std::vector<int> myVect1{ 1, 2, 3, 0, 0, 0 };
    std::vector<int> myVect2{ 2, 5, 6 };

    std::cout << "Unit Test Case 1: " << std::endl;
    Solution::merge(myVect1, 3, myVect2, 3);
    std::cout << "UT1: resultant Test case: " << std::endl;
    for (auto x : myVect1)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect1 = { 1 };
    myVect2 = {};

    Solution::merge(myVect1, 1, myVect2, 0);
    std::cout << "UT2: resultant Test case: " << std::endl;
    for (auto x : myVect1)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myVect1 = { 0 };
    myVect2 = {1};

    Solution::merge(myVect1, 0, myVect2, 1);
    std::cout << "UT3: resultant Test case: " << std::endl;
    for (auto x : myVect1)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}