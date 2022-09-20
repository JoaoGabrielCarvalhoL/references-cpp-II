#include <iostream>
#include <cstring>

template <class T>
class Stack {
public: 
	void stack(T array, int size) {

		for (int i = 0; i < size; i++) {
			std::cout << array[i] << std::endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	/*
	Example char[]

	Stack<const char*> stack; 
	char arr[] = {'A', 'B', 'C', 'D'};
	int size = sizeof(arr) / sizeof(char);

	char* pArr = arr;
	stack.stack(pArr, size);
	*/

	Stack<const std::string*> stack; 
	std::string arr[] = {"Joao", "Gabriel", "Carvalho", "Lopes", "Cruz"};
	int size = sizeof(arr) / sizeof(std::string); 
	std::string* pArr = arr; 
	stack.stack(pArr, size);

	return 0;
}