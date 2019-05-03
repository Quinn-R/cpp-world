#include "../inc/common.hpp"
#include "../inc/ReadTermSize.hpp"
#include "../inc/Output.hpp"

int main() {
    ReadTermSize rts;
    
    if(rts.readFile() == 1) {
        //std::cout << rts.getX();
        //std::cout << rts.getY();

        Output out(rts.getX(), rts.getY());

        out.println("Hello there, I am a sentence of more than 10 letters. I will test if the output and readtermsize class works correctly. Do you want to talk about How you are feeling? The command line below should be there for typing.");
        out.getString();
        //std::cout << out.getLineCounter();

        out.println("Hello there, I am a sentence of more than 10 letters. I will test if the output and readtermsize class works correctly.");
        out.getString();
        //std::cout << out.getLineCounter();

        out.println("Hello there, I am a sentence of more than 10 letters. I will test if the output and readtermsize class works correctly.");
        out.getString();
        //std::cout << out.getLineCounter();
        
        out.endOfProgram();
    }
    
    return 0;
}

