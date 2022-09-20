#ifndef Person_H
#define Person_H
#include <iostream>

class Person {
public: 
	Person();

	Person(std::string, std::string);

	~Person();

	std::string getName();

	std::string getEmail();

private: 
	std::string name{};

protected:
	std::string email{};
};


#endif