#include <iostream> 
#include <algorithm>

bool isAnagram(std::string s, std::string t) 
{
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    return (s == t ? true : false);
}

int main(){ 
    std::string s1 = "anagram";
    std::string s2 = "nagaram";
    std::cout << "<" << s1 << "," << s2 << "> are anagram? " << isAnagram(s1, s2) << std::endl;
    return 0;
}