#include <iostream>
#include "log.h"

#define PI 3.14159

int main() {
    InitLog();
    log("Hello world!");
    std::cout << "Value Of PI: " << PI << std::endl;

    return 0;
}