#include <iostream>
#include "Array.hpp"

using std::cout;
using std::endl;

int main() {
	Array<int> arr(5);
	Array<int> arr_b;

	for (int i = 0; i < 5; i++)
		arr[i] = i * 2;

	for (int i = 0; i < 5; i++)
		cout << arr[i] << endl;

	arr_b = arr;

	for (int i = 0; i < 5; i++)
		cout << arr_b[i] << endl;
}