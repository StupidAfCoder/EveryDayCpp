#include<iostream>
#include "log.h"

void InitLog(){
    std::cout << "Log Initialized" << std::endl;
}

void log(const char* message){
    std::cout << message << std::endl;
}