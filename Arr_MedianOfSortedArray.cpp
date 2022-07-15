#include <iostream> 
#include <algorithm>
#include <numeric>
#include <vector>
double findMedianSortedArrays(std::vector<int>& arr1, std::vector<int>& arr2)
{
    for (auto x : arr2)
    {
        arr1.push_back(x);
    }
    std::sort(arr1.begin(), arr1.end()); 

    if (arr1.size() % 2 != 0)
    {
        return static_cast<double>(arr1[arr1.size() / 2]);
    }
    else
    {
        int n = arr1.size();
        return static_cast<double>((arr1[(n - 1) / 2] + arr1[n / 2]) / 2.0);
    }
}
int main()
{ 
    std::vector<int> myArr1{ 1, 3 };
    std::vector<int> myArr2{ 2 };
    std::cout << "Median of two vector: " << findMedianSortedArrays(myArr1, myArr2) << std::endl;

    myArr1 = { 1, 2 };
    myArr2 = { 3, 4 };
    std::cout << "Median of two vector: " << findMedianSortedArrays(myArr1, myArr2) << std::endl;

    myArr1 = { 1, 3 };
    myArr2 = { 2, 7 };
    std::cout << "Median of two vector: " << findMedianSortedArrays(myArr1, myArr2) << std::endl;
    return 0;
}