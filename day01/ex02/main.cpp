#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main(void) {
	string brain = "HI THIS IS BRAIN";
	string *stringPtr = &brain;
	string& stringRef = brain;

	cout << "Address of brain: " << &brain << endl;
	cout << "Address of stringPtr: " << stringPtr << endl;
	cout << "Address of stringRef: " << &stringRef << endl;

	cout << *stringPtr << endl;
	cout << stringRef << endl;
}