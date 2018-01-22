//
// Created by ethanabrace on 1/22/2018.
//

#include "Utility.h"
#include <random>

void Utility::wait(std::string message) {

    std::cout << message << std::endl;
    std::cin.get();
    std::cin.get();
}

int Utility::random_int(int lowest, int highest) {

    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(lowest,highest);

    return uni(rng);
}
