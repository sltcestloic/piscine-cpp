#ifndef EASYFIND_H
#define EASYFIND_H

template<typename T>
typename T::iterator easyfind(T& container, int val) {
	return find(container.begin(), container.end(), val);
}

#endif