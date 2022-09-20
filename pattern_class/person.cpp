#include "person.h"


Person::Person() {
	std::cout << "Hi.." << std::endl;
}

Person::Person(std::string namePerson, std::string emailPerson) {
	name = namePerson;
	email = emailPerson;
}

Person::~Person() {
	std::cout << "Bye.." << std::endl;
}

std::string Person::getName() {
	return name;
}

std::string Person::getEmail() {
	return email;
}

 
