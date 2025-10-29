#include<iostream>
#include<string>
//Mutable keyword is just used so that if there is a const method and you want an variable to still be able to change in that const method!!
//There is other use with lambdas also 

class Entity{
    private:
        std::string M_x;
        mutable int debug_count; // If mutable was not here it would not be able to change in the method!!
    public:
        const std::string& getString() const {
            debug_count++;
            return M_x;
        }
};

int main(){
    Entity e;
    e.getString();

    int x=6;
    auto f = [=]() mutable {
        x++;
        std::cout << "Mutable!! " << x << std::endl; 
    };

    f();
    std::cout << "X will be "<< x << " outside due to not passing it with reference!!"<< std::endl;
    return 0;
}