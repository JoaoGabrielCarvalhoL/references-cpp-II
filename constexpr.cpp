#include <iostream>

constexpr long int fibonacci(int number) {
	return (number <= 1) ? number : fibonacci(number - 1) + fibonacci(number - 2);
}

int main(int argc, char const *argv[])
{
	int number{0};
	std::cout << "Enter a number: ";
	std::cin >> number;
	long int result = fibonacci(number); 
	std::cout << "Fibonacci: " << result << std::endl;
	return 0;
}