#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include "easyfind.hpp"
#include <algorithm>

template<typename T>
int easyfind(T& l, int i)
{
    if(l.end() == (std::find(l.begin(), l.end(), i)))
        throw (std::runtime_error("valor not found."));
    else    
        return (i);
}

#endif