#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <stack>
#include <vector>

template<typename T>
class MutantStack: public std::stack<T>
{
    private:
        template<typename T>
        vector<T> cp;
    public:
        template<typename T>
        MutantStack(){}
        template<typename T>
        MutantStack(Mutantstack const & c)
        {
            
        }
        MutantStack const & operator = (MutantStack const & c);
        ~MutantStack();
        int begin();
        int end();
};

#endif