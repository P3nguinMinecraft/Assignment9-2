// Ethan Yao
// CIS 1202 800
// July 17, 2025

#include <iostream>
using namespace std;

char character(char, int);

int main(int argc, const char * argv[]) {
    
    return 0;
}


char character(char start, int offset){
    if (!isalpha(start)){
        throw "Error: Invalid Character";
    }
    
    char result = start + offset;
    
    if (!isalpha(result)){
        throw "Error: Invalid Range";
    }
    
    return result;
}
