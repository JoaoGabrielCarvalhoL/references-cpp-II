#include <iostream>

class Person {
public: 
	int num() {
		return 10;
	}

	int num(int number) {
		return number;
	}
};

class Turma : public Person {
public: 
	int num() {
		return 50;
	}

	int num(int number) {
		return number;
	}
};

int main(int argc, char const *argv[])
{	
	Person person;
	Turma turma; 

	std::cout << "num() of Person: " << person.num() << std::endl;
	std::cout << "num(int num) of Person: " << person.num(150) << std::endl;
	std::cout << "num() of Turma: " << turma.num() << std::endl;
	std::cout << "num(int num) of Turma: " << turma.num(50) << std::endl;	


	return 0;
}