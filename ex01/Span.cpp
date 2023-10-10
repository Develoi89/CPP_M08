#include "Span.hpp"

Span::nbFull::nbFull(): std::runtime_error("Span is full"){}

Span::Span()
{
}

Span::Span(unsigned int N): _max(N)
{
}

Span::Span(Span const &c): _numbers(c._numbers), _max(c._max)
{
}

Span &Span::operator= (Span const &c)
{
    _max = c._max;
    _numbers = c._numbers;
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if(_numbers.size() < _max)
        _numbers.push_back(n);
    else
        throw nbFull();
}

int Span::shortestSpan()
{
    int r;
    int tmp;
    std::vector<int>::iterator it;
    for (it = _numbers.begin(); it != _numbers.end(); it++)
    {
        std::vector<int>::iterator itt;
        for (itt = _numbers.begin(); itt != _numbers.end(); itt++)
        {
            if(it != itt)
                {
                    tmp = *it - *itt;
                    if(tmp < 0)
                        tmp = tmp * -1;
                    if(tmp < r)
                        r = tmp;
                }
        }
    }
    return r;
}

int Span::longestSpan()
{
	    int r;
    int tmp;
    std::vector<int>::iterator it;
    for (it = _numbers.begin(); it != _numbers.end(); it++)
    {
        std::vector<int>::iterator itt;
        for (itt = _numbers.begin(); itt != _numbers.end(); itt++)
        {
            if(it != itt)
                {
                    tmp = *it - *itt;
                    if(tmp < 0)
                        tmp = tmp * -1;
                    if(tmp > r)
                        r = tmp;
                }
        }
    }
    return r;	
}

std::vector<int> Span::getNmb()
{
	return _numbers;
}