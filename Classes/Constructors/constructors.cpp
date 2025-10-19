#include<iostream>

class Entity{
    float x;
    float y;
    public:
        Entity(){
            x = 0.0f;
            y = 0.0f;
        }
        void Print(){
            std::cout << "Value of X -> " << x << std::endl << "Value of Y -> " << y << std::endl;
        }

};

class Physics{
    Physics() = delete;

    public:
        static void Print(){
            std::cout << "Static Function" << std::endl;
        }
};

int main() {
    Entity e;
    e.Print();

    //You can't initialise a constructor of Physics class as we have deleted the default constructor
    /* Physics p; <- This is an error */
    Physics::Print();

    return 0;
}