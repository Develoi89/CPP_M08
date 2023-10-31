#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        using typename std::stack<T>::container_type;
        // using typename container_type::iterator;
        class iterator
        {
            private:
                typename container_type::iterator current;
            public:
                iterator(typename container_type::iterator current): current(current){}
                iterator(iterator const &c): current(c.current){}
                ~iterator(){}
                iterator & operator++()
                {
                    ++current;
                    return *this;
                }
                iterator & operator--()
                {
                    --current;
                    return *this;
                }
                bool operator==(iterator const &m)
                {
                    return (current==m.current);
                }
                bool operator!=(iterator const &m)
                {
                    return !(current==m.current);
                }
                T& operator*()
                {
                    return *current;
                }
        };
        MutantStack<T>(){}
        MutantStack<T>(MutantStack const & c){}
        MutantStack const & operator = (MutantStack const & c){}
        ~MutantStack<T>(){}
        iterator begin()
        {
            return iterator(std::stack<T>::c.begin());
        }
        iterator end()
        {
            return iterator(std::stack<T>::c.end());
        }
};

#endif