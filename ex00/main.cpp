#include "easyfind.tpp"
#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>

int main(void)
{
    {
        std::vector<int> enteros;
        for (size_t i = 0; i < 42; i++)
            enteros.push_back(i);

        try
        {
           std::cout << easyfind(enteros, -4) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
        std::list<int> integers;
        for (size_t i = 0; i < 142; i++)
            integers.push_back(i);
        try
        {
           std::cout << easyfind(integers, 121) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }
}