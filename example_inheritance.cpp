#include <iostream>

class Person {
public: 
	void name() {
		std::cout << "Joao Gabriel Carvalho" << std::endl;
	}
};

class Skill : public Person {
public: 
	void language() {
		std::cout << "PT-BR" << std::endl;
	}
};

int main(int argc, char const *argv[])
{
	Skill skill; 
	skill.name(); 
	skill.language();
	return 0;
}