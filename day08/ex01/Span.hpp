#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
	private:
		unsigned int _n;
		std::vector<int> _vect;
		Span();
	public:
		Span(unsigned int n);
		Span(Span const & ref);
		~Span();
		Span &operator=(Span const & ref);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void display();
};

#endif