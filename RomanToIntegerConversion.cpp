#include <iostream> 
#include <vector>
#include <map>
int romanToInt(std::string& str)
{
    std::map<char, int> symToInt;
    symToInt.insert({ 'I', 1 });
    symToInt.insert({ 'V', 5 });
    symToInt.insert({ 'X', 10 });
    symToInt.insert({ 'L', 50 });
    symToInt.insert({ 'C', 100 });
    symToInt.insert({ 'D', 500 });
    symToInt.insert({ 'M', 1000 });
    
    int sum = 0;
    uint32_t i = 0U;
    for (i = 0; i < str.length(); i++)
    {
        std::cout << symToInt[str[i]] << " ";
        /*If present value is less than next value,
          subtract present from next value and add the
          resultant to the sum variable.
          CM ==> 900 case
          */
        if (symToInt[str[i]] < symToInt[str[i + 1]])
        {
            std::cout << "Entered Inside: " << std::endl;
            sum += symToInt[str[i + 1]] - symToInt[str[i]];
            i++;
            continue;
        }        
        sum += symToInt[str[i]];
    }
    return sum;
}

int main(){ 
    //std::string str = "MCMXCIV";
    //std::cout << "getRoman(" << str << ")" << romanToInt(str) << std::endl;
    std::string str = "III";
    std::cout << "getRoman(" << str << ")" << romanToInt(str) << std::endl;
    return 0;
}