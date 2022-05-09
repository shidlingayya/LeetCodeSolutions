#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int getLenOfLastWord(std::string& str)
{
    istringstream ss(str);
    std::vector<std::string> myVect{};
    string word;
    while (ss >> word)
    {
        myVect.push_back(word);
    }
    return myVect.back().size();
}

int main()
{
    std::string word = "  fly me   to   the moon  ";
    std::cout << "Len of last word: " << getLenOfLastWord(word) << std::endl;
    return 0;
}