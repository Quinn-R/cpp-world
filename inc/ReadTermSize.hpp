#ifndef READTERMSIZE_HPP
#define READTERMSIZE_HPP

#include "common.hpp"

class ReadTermSize {
    private:

    int x, y;
    std::string tmp;
    std::ifstream fileIn;

    public:

    void readFile();

    int getX();
    int getY();
};

#endif