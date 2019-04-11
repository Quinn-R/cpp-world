#include "../inc/ReadTermSize.hpp"
#include "../inc/common.hpp"

void ReadTermSize::readFile() {
    fileIn.open("terminalSize.txt");
    fileIn >> x;
    //x = std::stoi(tmp);
    fileIn >> y;
    //y = std::stoi(tmp);
    fileIn.close();
}

int ReadTermSize::getX() {return x;}
int ReadTermSize::getY() {return y;}