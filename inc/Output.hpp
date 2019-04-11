#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include "common.hpp"

class Output {
    private:

    int x, y, lineCounter;
    std::string tmp;

    public:

    Output(int x, int y);

    void println(std::string out);
    std::string getString();
    int getLineCounter();

    void setDimentions(int x, int y);
};

#endif