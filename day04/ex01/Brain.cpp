#include "Brain.hpp"

using std::cout;
using std::endl;

Brain::Brain() {
	cout << "Default Brain constructor called" << endl;
}

Brain::Brain(Brain const &ref) {
	*this = ref;
	cout << "Brain copy constructor called" << endl;
}

Brain::~Brain() {
	cout << "Brain destructor called" << endl;
}

Brain &Brain::operator=(Brain const &ref) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ref._ideas[i];
	return *this;
}