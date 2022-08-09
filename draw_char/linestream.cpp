#include <iostream>
#include <sstream>
/*
A easy program practising string stream, and convert break lines by words 
*/
int main()
{
    std::string input;
    getline(std::cin,input);
    std::stringstream ss(input); // make input string as stream
    while(ss.good())
    {
        std::string token;
        ss >> token;

        std::cout << token << std::endl;
    }
}
