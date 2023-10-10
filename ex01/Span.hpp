#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <stdexcept>

class Span
{
	private:
		std::vector<int>	_numbers;
		unsigned int _max;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &c);
		Span &operator = (Span const &c);
		~Span();

		void addNumber(int n);
		class nbFull: public std::runtime_error
		{
			public:
				nbFull();
		};
		int shortestSpan();
		int longestSpan();
};

#endif