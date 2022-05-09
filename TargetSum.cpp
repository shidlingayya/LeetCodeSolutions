#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

std::vector<int> getPairs(std::vector<int>& arr, int target)
{
    std::vector<int> indices{};
    for (auto i = 0U; i <= arr.size(); i++)
    {
        for (auto j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                indices.push_back(i);
                indices.push_back(j);
            }
        }
    }
    return indices;
}

int main()
{
    std::vector<int> myVect = { 2, 7, 11, 15 };
    std::vector<int> pairs = getPairs(myVect, 9);

    std::cout << "[";
    for (auto x : pairs)
    {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;

    myVect = { 3, 2, 4 };
    pairs = getPairs(myVect, 6);
    std::cout << "[";
    for (auto x : pairs)
    {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;

    myVect = { 3, 3 };
    pairs = getPairs(myVect, 6);
    std::cout << "[";
    for (auto x : pairs)
    {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}