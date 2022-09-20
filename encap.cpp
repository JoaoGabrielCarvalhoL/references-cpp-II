#include <iostream>

class Person {
private: 
	int age{27};
protected: 
	double heigth{1.73};
public: 
	void name() {
		std::cout << "Joao Gabriel Carvalho" << std::endl;
	}

	int getAge() {
		return age;
	}

	double getHeight() {
		return heigth;
	}
};

class Skill : public Person {
public: 
	void language() {
		std::cout << "PT-BR" << std::endl;
	}
};

class Data : public Skill {
	
};

int main(int argc, char const *argv[])
{
	Data data; 
	data.name(); 
	data.language();
	std::cout << data.getHeight() << std::endl;
	std::cout << data.getAge() << std::endl;
	return 0;
}