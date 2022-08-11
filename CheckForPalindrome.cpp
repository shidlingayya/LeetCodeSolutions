#include <iostream> 
#include <vector>
#include <string>

bool isPalindrome(std::string& s)
{
    std::string str = "";
    int i = 0;
    while (i < s.size())
    {
        char ch = std::tolower(s[i]);
        if (std::isalpha(ch))
        {            
            str += ch;
        }
        else if (std::isdigit(ch))
        {
            str += ch;
        }
        i++; 
    }    
    std::string revStr = str;
    std::reverse(revStr.begin(), revStr.end());
    return((str == revStr) ? true : false);
}

int main(){ 
    std::string s = "A man, a plan, a canal: Panama";
    std::cout << "isPalindrome():" << isPalindrome(s) << std::endl;
    return 0;
}