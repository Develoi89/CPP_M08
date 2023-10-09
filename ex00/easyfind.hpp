#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
#include <stdexcept>
#include <vector>

vnf::vnf(): std::runtime_error("vlaor not found."){}

template<typename T>
T easyfind(T& l, int i)
{
    for (T iter = l.begin(); iter != l.end(); ++iter)
    {
        if(iter == i)
        {
            std::cout << iter << std::endl;
            return iter;
        }
    } 
    throw vnf();
}

class vnf: public std::runtime_error
{
    public:
        vnf();
};

#endif
