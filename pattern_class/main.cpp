#include "person.h"


int main(int argc, char const *argv[]) {
	Person person("Joao Gabriel", "27.joaogabriel@gmail.com");
	std::cout << person.getName() << std::endl;
	std::cout << person.getEmail() << std::endl;
	return 0;
}