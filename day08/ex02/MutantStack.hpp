#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {	
	public:
		typedef typename MutantStack::container_type::iterator iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const & ref) : std::stack<T>(ref) {};
		virtual ~MutantStack() {}

		MutantStack &operator=(MutantStack const & ref) {
			std::stack<T>::operator=(ref);
		}

		iterator begin() {
			return this->c.begin();
		};

		iterator end() {
			return this->c.end();
		};
};



#endif