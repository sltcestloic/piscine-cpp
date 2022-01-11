#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
	private:
		T* data;
		unsigned int len;
	public:
		//Default constructor
		Array() {
			data = NULL;
			len = 0;
		}
		//Constructor with size
		Array(int n) {
			data = new T[n];
			len = n;
		}
		//Copy constructor
		Array(Array const &ref) {
			*this = ref;
		}
		//Operator = overload
		Array &operator=(Array const &ref) {
			if (this == &ref) return *this;

			if (data) delete [] data;

			len = ref.len;
			data = new T[ref.len];
			for (size_t i = 0; i < ref.len; i++)
				data[i] = ref.data[i];
			return *this;
		}
		//Destructor
		~Array() { delete [] data; }
		//Operator [] overload
		T& operator[](unsigned int index) {
			if (index < 0 || index > len || !data)
				throw std::exception();
			return data[index];
		}
};


#endif