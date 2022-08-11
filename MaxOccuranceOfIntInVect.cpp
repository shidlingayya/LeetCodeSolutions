#include <iostream> 
#include <vector>
#include <map>
int majorityElement(std::vector<int>& myArr)
{
    std::map<int, int> myMap;
    for (auto i = 0U; i < myArr.size(); i++)
    {
        myMap[myArr[i]]++;
    }    
    int elem = 0;
    int max = 0;
    for (auto x : myMap)
    {
        std::cout << x.first << " " << x.second << std::endl;
        if (x.second > max)
        {
            std::cout << "When max is: " << max << " " << x.second << std::endl;
            elem = x.first;
            max = x.second;
        }
    }
    return elem;
}

int main(){ 
    //std::vector<int> myVect{ 3,2,3 };
    //std::cout << "Majority of element is: " << majorityElement(myVect) << std::endl;

    std::vector<int> myVect = { 3, 3, 4 };
    std::cout << "Majority of element is: " << majorityElement(myVect) << std::endl;
    return 0;
}