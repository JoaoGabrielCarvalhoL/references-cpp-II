#include <iostream>

class Person {
public: 
	Person() {
		std::cout << "Message from Constructor" << std::endl; 
	}

	~Person(){
		std::cout << "Message from Destructor" << std::endl;	
	}
}; 

int main(int argc, char const *argv[])
{
	Person p;
	return 0;
}