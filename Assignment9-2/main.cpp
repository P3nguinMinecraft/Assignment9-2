// Ethan Yao
// CIS 1202 800
// July 17, 2025

#include <iostream>
#include <string>
using namespace std;

char character(char, int);
void attempt(char, int);

template <typename T>
T half(T);

int main(int argc, const char * argv[]) {
    attempt('a', 1);
    attempt('a', -1);
    attempt('Z', -1);
    attempt('?', 5);
    attempt('A', 32);
    return 0;
}

void attempt(char start, int offset){
    cout << "character(" << start << ", " << offset << "): ";
    try {
        cout << character(start, offset);
    }
    catch (string& e) {
        cout << e;
    }
    cout << endl;
}


char character(char start, int offset){
    if (!isalpha(start)){
        throw string("Error: Invalid Character");
    }
    
    char result = start + offset;
    
    if (!isalpha(result)){
        throw string("Error: Invalid Range");
    }
    
    if (isupper(start) != isupper(result)){ // if case is not the same
        throw string("Error: Case Transition");
    }
    
    return result;
}

template <typename T>
T half(T value) {
    return value / 2;
}

// int overload with rounding
int half(int value) {
    return static_cast<int>(round(value / 2.0));
}
