
#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template<typename T>
void iter(T* array, unsigned int len, void (*f)(T& arg)) {
    for (unsigned int i = 0; i < len; i++)
        f(array[i]);
}

template<typename T>
void iter(T* array, unsigned int len, void (*f)(T const &  arg)) {
    for (unsigned int i = 0; i < len; i++)
        f(array[i]);
}

void print_str(std::string &str) { std::cout << str << std::endl; }

void print_int(int& arg) { std::cout << arg << std::endl; }

template<typename T>
void print_anything(T& arg) { std::cout << arg << std::endl; }
#endif