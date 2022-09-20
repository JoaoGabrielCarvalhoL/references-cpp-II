#include <iostream>
#include <algorithm>
#include <iterator>

bool isLetter(char letter) {
	return (letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z');
}

int main(int argc, char const *argv[])
{
	const char value[]	 = "HmakldmklaANS7KLDNALASDMKALDMKLA";
	const char* iterator = std::find_if_not(std::begin(value), std::end(value), isLetter); 
	std::cout << "Character: " << *iterator << std::endl;
	return 0;

}

/*
Implementation lambda 

int main(int argc, char const *argv[]){
	const char value[]	 = "HmakldmklaANS7KLDNALASDMKALDMKLA";
	auto iterator = std::find_if_not(std::begin(value), std::end(value), [](char letter) {
		return (letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z');
	});	
	std::cout << "Character: " << iterator << std::endl;
	return 0;
}



*/