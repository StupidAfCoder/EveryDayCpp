#include<iostream>
#include<string>
/*
    Here the virtual keyword act as an obstructor that tells the compiler that the method can be overwritten and 
    it has to check the method that is relevant for the class

    Also the override keyword is used for good code redability and also for checks as it shows an error if the method
    cannot be overwritten!!
*/


class Entity{
    public:
        virtual std::string getName(){
            return "Entity";
        }
};

class Player : public Entity{
    private:
        std::string p_Name;
    public:
        Player(const std::string& name) : p_Name (name) {}

        std::string getName() override {
            return p_Name;
        }
};

void Print(Entity* e){
    std::cout << e -> getName() << std::endl;
}

int main() {
    Entity* e = new Entity();
    Print(e);

    Player* player1 = new Player("Yashu");
    Print(player1);

    return 0;
}
