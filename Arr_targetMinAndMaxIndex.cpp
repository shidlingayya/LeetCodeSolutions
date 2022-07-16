#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
std::vector<int> searchRange(std::vector<int> myArr, int target)
{
    std::vector<int> index{};
    for (auto i = 0; i < myArr.size(); i++)
    {
        if (myArr[i] == target)
        {
            index.push_back(i);
        }
    }

    int min = 0;
    int max = 0;
    if (!index.empty())
    {
        min = *std::min_element(index.begin(), index.end());
        max = *std::max_element(index.begin(), index.end());
    }
    else
    {
        min = -1;
        max = -1;
    }

    index.clear();

    index.push_back(min);
    index.push_back(max);

    return index;
}

int main()
{
    std::vector<int> myArr{ 5, 7, 7, 8, 8, 10 };
    std::vector<int> indexes = searchRange(myArr, 8);
    for (auto x : indexes)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    indexes.clear();

    myArr = { 5, 7, 7, 8, 8, 10 };
    indexes = searchRange(myArr, 6);
    for (auto x : indexes)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    myArr = {};
    indexes = searchRange(myArr, 0);
    for (auto x : indexes)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}