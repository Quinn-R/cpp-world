#include "../inc/ReadTermSize.hpp"
#include "../inc/common.hpp"

int ReadTermSize::readFile() {
    fileIn.open("../terminalSize.txt");
    if(! fileIn.fail()) {
        fileIn >> x;
        //x = std::stoi(tmp);
        fileIn >> y;
        //y = std::stoi(tmp);
        fileIn.close();
        
        return 1;
    } else {
        std::cout << "could not load file" << std::endl;
        
        return 0;
    }
    
}

int ReadTermSize::getX() {return x;}
int ReadTermSize::getY() {return y;}