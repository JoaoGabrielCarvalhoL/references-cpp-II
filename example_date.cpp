#include <iostream>
#include <ctime>

inline std::string format(int number) {
	std::string dateFormat{}; 
	if (number < 10) {
		dateFormat = "0" + std::to_string(number);
	}else {
		dateFormat = std::to_string(number);
	}

	return dateFormat;
}

int main(int argc, char const *argv[]) {

	time_t now = time(0);
	char* dateTime = ctime(&now);

	tm* time = localtime(&now);

	std::cout << "Full Date: " << dateTime << std::endl;
	std::cout << "Year: " << 1900 + time->tm_year << std::endl;
	std::cout << "Month: " << 1 + time->tm_mon << std::endl;
	std::cout << "Day: " << time->tm_mday << std::endl;
	std::cout << "Hour: " << time->tm_hour << std::endl;
	std::cout << "Minutes: " << time->tm_min << std::endl;
	std::cout << "Seconds: " << time->tm_sec << std::endl;

	std::string dateFormat = format(time->tm_hour) + ":" + format(time->tm_min) + ":" + format(time->tm_sec); 
	std::cout << "Date: " << dateFormat << std::endl;
}