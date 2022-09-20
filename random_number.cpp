#include <iostream>
#include <random>

int main(int argc, char const *argv[]) {
    
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<> dis(0, 9);

    std::string y{};
    for (int i = 0; i < 3; i++) {
        y +=std::to_string(dis(gen));
    }

    std::cout << y << std::endl;
}



