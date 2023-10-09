#include "easyfind.hpp"

int main(void)
{
    std::vector<int> enteros = {1, 2, 3, 4, 5};
    try
    {
       easyfind(enteros, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}