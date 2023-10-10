#include "Span.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		try
		{
			Span sp = Span(10000);
			std::vector<int> s;
			for (size_t i = 0; i < 10000; i++)
				s.push_back(i);
			sp.addStack(s);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp.getNmb().size() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
return 0;
}