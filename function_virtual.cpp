#include <iostream>

class Mother {
public:
	virtual void message() {
		std::cout << "I'm mother" << std::endl;
	}
}; 

class Daughter : public Mother{
public: 
	void message() {
		std::cout << "I'm daughter" << std::endl;	
	}
}; 

class GrandDaugther : public Daughter {
public: 
	void message() {
		std::cout << "I'm grand daughter" << std::endl;
	}
}; 

void response(Mother* mother) {
	mother->message();
}

int main(int argc, char const *argv[])
{
	Mother m; 
	Daughter d; 
	GrandDaugther g;

	m.message(); 
	d.message(); 
	g.message();

	response(&m);
	response(&d);
	response(&g);



	return 0;
}