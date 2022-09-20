#include <iostream>
#include <regex>

bool start_with_letter(std::string message) {
	std::regex re("^[a-zA-Z]");
	std::smatch match;
	return std::regex_search(message, match, re);
}



int main(int argc, char const *argv[]) {
	std::string text = "Any message"; 
	if (start_with_letter(text)) {
		std::cout << "True" << std::endl;
	} else {
		std::cout << "False"<< std::endl;
	}

	return 0;
}