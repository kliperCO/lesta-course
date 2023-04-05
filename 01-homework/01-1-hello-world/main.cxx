#include <iostream>

int main()
{
    std::cout<<std::endl<<"Hello, World!"<<std::endl;

    return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}