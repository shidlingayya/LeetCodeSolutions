// Leetcode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <vector>
class Solution
{
public:
    static void removeDuplicate(std::vector<int>& elems)
    {
        auto ip = std::unique(elems.begin(), elems.begin() + elems.size());
        elems.resize(std::distance(elems.begin(), ip));
    }
};

int main()
{
    std::vector<int> myList{ 1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6 };
    Solution::removeDuplicate(myList);
    for (auto x : myList)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}