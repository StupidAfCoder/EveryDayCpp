#include<iostream>

void increment ( int& value ){
    value++;
}

void decremenet (int* value){
    (*value) -- ;
}

int main() {
    int var = 67;
    int& ref = var;
    ref = 56;
    std::cout << ref << std::endl;
    increment(ref);
    std::cout << ref << std::endl;
    decremenet(&ref);
    std::cout << ref << std::endl;    
    return 0;
}