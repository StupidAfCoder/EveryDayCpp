#include<iostream>

/*
    Both Struct and Classes don't really have a difference atleast during this version of C++ as the only difference lies in the visibility
    of both of them during instiation as struct is default to public and class to private otherewise it depends on your style whether to use 
    struct or class.
*/
//Struct are mainly there for backward compatability for C.

/*
    For complexity Classes and simplicity is struct
*/


class Player{
    public:
        int x , y;
        int speed;
        void Move(int xa , int ya){
            x += xa * speed;
            y += ya * speed;
        }
};

struct Enemy{
    int x , y;
    int speed;
    float accuracy;

    void Move(int xa , int ya){
        x += xa * speed;
        y += ya * speed;
    }

};

int main() {
    Player player1; 
    player1.x = 45;
    player1.y = 98;
    player1.speed = 10;
    std::cout << player1.x << std::endl;
    std::cout << player1.y << std::endl;
    player1.Move(34,34);
    std::cout << player1.x << std::endl;
    std::cout << player1.y << std::endl;
    
    Enemy enemy1;
    enemy1.x = 67;
    enemy1.y = 90;
    enemy1.speed = 5;
    enemy1.accuracy = 89.8;
    enemy1.Move(45,45);
    std::cout << enemy1.x << std::endl;
    std::cout << enemy1.y << std::endl;
    
    return 0;
}