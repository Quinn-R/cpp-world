#include "inc/common.hpp"
#include "inc/ReadTermSize.hpp"
#include "inc/Output.hpp"

int main() {
    ReadTermSize rts;
    rts.readFile();
    //std::cout << rts.getX();
    //std::cout << rts.getY();

    Output out(rts.getX(), rts.getY());

    out.println("Hello there, I am a sentance of more than 10 letters. I will test if the output and readtermsize class works correctly.");
    out.getString();
    //std::cout << out.getLineCounter();

    out.println("Hello there, I am a sentance of more than 10 letters. I will test if the output and readtermsize class works correctly.Hello there, I am a sentance of more than 10 letters. I will test if the output and readtermsize class works correctly.");
    out.getString();
    //std::cout << out.getLineCounter();

    out.println("Hello there, I am a sentance of more than 10 letters. I will test if the output and readtermsize class works correctly.");
    out.getString();
    //std::cout << out.getLineCounter();
    
    return 0;
}

