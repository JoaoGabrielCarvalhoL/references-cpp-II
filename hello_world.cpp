#include <iostream>

class Hello {
public: 
	void hello() {
		std::cout << "Hello" << std::endl;
	}
};

int main(int argc, char const *argv[])
{
	Hello hello; 
	hello.hello();
	return 0;
}