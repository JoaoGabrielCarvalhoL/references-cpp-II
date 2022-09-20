#include <iostream>
#include <cstring>

class Stack {
public: 
	void stack(const char* array) {

		for (int i = 0; i < strlen(array); i++) {
			std::cout << array[i] << std::endl;
		}
	}
};

int main(int argc, char const *argv[])
{
	Stack stack; 
	char arr[] = {'A', 'B', 'C', 'D'};
	char* pArr = arr;
	stack.stack(pArr);

	return 0;
}