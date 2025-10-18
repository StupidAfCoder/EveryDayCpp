#include <iostream>
#include <bits/stdc++.h>
#define LOG(x) std::cout << x << std::endl;

int main(){
    int var = 54;
    LOG(var);
    int* pointer = &var;
    *pointer = 65;
    LOG(var);

    //Sets The values of 0 to the bytes location of the memory address
    char* buffer = new char[9];
    memset(buffer, 0 , 9);
    
    //Pointer to a pointer that stores the address to the buffer pointer
    char** ptr = &buffer;

    //Free
    delete[] buffer;
    
    return 0;
}