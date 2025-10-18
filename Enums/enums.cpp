#include<iostream>

enum States : int {
    STAND = 1 , MOVE , RUN , JUMP , ATTACK
};


int main() {
    for ( int i = STAND ; i <= ATTACK ; i++){
        std::cout <<  i << std::endl;
    }
    return 0;
}