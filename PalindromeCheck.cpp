#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

bool checkIfPalindrome(int num)
{
    int origNum = num;
    int rem = 0;
    int rev = 0;
    if (num < 0)
    {
        return false;
    }
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    std::cout << "origNum: " << origNum << "rev: " << rev << std::endl;

    return (origNum == rev ? true : false);
}

int main()
{
    if (checkIfPalindrome(121))
    {
        std::cout << "121 is palindrome" << std::endl;
    }
    else
    {
        std::cout << "121 is not palindrome" << std::endl;
    }

    if (checkIfPalindrome(-121))
    {
        std::cout << "-121 is palindrome" << std::endl;
    }
    else
    {
        std::cout << "-121 is not palindrome" << std::endl;
    }

    if (checkIfPalindrome(10))
    {
        std::cout << "10 is palindrome" << std::endl;
    }
    else
    {
        std::cout << "10 is not palindrome" << std::endl;
    }

    return 0;
}