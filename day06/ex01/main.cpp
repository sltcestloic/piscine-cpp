#include <iostream>
#include <stdint.h>

//https://stackoverflow.com/questions/573294/when-to-use-reinterpret-cast

struct Data {
	int val;
};

uintptr_t seralize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(){
	Data data = {42};

	std::cout << "Ptr to data: " << &data << std::endl;

	uintptr_t serialized = seralize(&data);
	std::cout << "Serialized ptr: " << serialized << std::endl;
	Data* deserialized = deserialize(serialized);
	std::cout << "Deserialized ptr: " << deserialized << std::endl;
	std::cout << "Deserialized value: " << deserialized->val << std::endl;
}