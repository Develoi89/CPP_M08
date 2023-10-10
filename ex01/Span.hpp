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
		std::vector<int> getNmb();

		template<typename T>
		void addStack(T &con);
};

template<typename T>
void Span::addStack(T &con)
{
	if((con.size() + _numbers.size()) <= _max)
	{
		typename T::const_iterator it;
		for (it = con.begin(); it != con.end(); it++)
			addNumber(*it);
	}
	else
		throw nbFull();
}

#endif