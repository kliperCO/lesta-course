#include <iostream>

int main()
{
    std::cout<<std::endl<<"Hello, World!"<<std::endl;

    bool check = std::cout.good();

    return check ? EXIT_SUCCESS : EXIT_FAILURE;
}