#include <iostream> 
#include <vector>
#include <string>

std::string prefixUtil(std::string& s1, std::string& s2)
{
    std::string result = "";
    int len = std::min(s1.length(), s2.length());
    for (auto i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
        {
            break;
        }
        result += s1[i];
    }

    return result;
}

std::string longestCommonPrefix(std::vector<std::string>& strs)
{
    std::string prefix = strs[0]; //starts with str[0]
    for (auto i = 1; i < strs.size(); i++)
    {
        prefix = prefixUtil(prefix, strs[i]);
    }

    return prefix;
}

int main(){ 
    std::vector<std::string> strs = { "flower","flow","flight" };
    std::cout << "get common prefix: " << longestCommonPrefix(strs) << std::endl;
    return 0;
}