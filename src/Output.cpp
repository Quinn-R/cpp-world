#include "../inc/Output.hpp"
#include "../inc/common.hpp"

Output::Output(int x, int y) {
    this -> x = x;
    this -> y = y;
    lineCounter = 0;
}

void Output::println(std::string out) {
    int lineCounter = 1;
    
    std::cout << "\n";
    
    for(int i = 0; i < out.length(); i++) {
        if(i % x != 0 || i == 0) {
            std::cout << out[i];
        } else {
            std::cout << "\n";
            std::cout << out[i];
            lineCounter++;
        }
    }
    
    this->lineCounter = lineCounter;
}

std::string Output::getString() {
    int lineEnter = 1;

    if(lineCounter < y) {
        lineEnter = y - lineCounter/* - 1*/;
    }
    
    for(int i = 0; i < lineEnter; i++) {
        std::cout << "\n";
    }

    //tmp = std::cin.get();
    std::cin >> tmp;

    return tmp;
}

int Output::getLineCounter() {
    return lineCounter;
}