#include<iostream>
//If you run this program the linker will not take into account the static var declared in the static.cpp
//Same for this function
void function(){

}

int main(){
    int static_var = 78;
    std::cout << static_var << std::endl;
    return 0;
}