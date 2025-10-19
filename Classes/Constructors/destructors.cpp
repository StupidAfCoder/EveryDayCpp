#include<iostream>

class Entity{
    float X;
    float Y;

    public:
        Entity(){
            std::cout << "Entity constrcuted!!" << std::endl;
            X = 0.0f;
            Y = 0.0f;
        }
        void Print(){
            std::cout << "Value Of X -> " << X << std::endl;
            std::cout << "Value Of Y ->" << Y << std::endl;
        }
        ~Entity(){
            std::cout << "Entity Destroyed!!" << std::endl;
        }
};

void function(){
    Entity e;
    e.Print();
}

int main(){

    function();
    return 0;
    
}