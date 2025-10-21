#include<iostream>
#include<string>

class Entitiy{
    public:
        float X = 0.0f, Y = 0.0f;

        void Move(float x , float y){
            X += x;
            Y += y;
            std::cout << "Current Position of X ->" << X << std::endl;
            std::cout << "Current Position of Y ->" << Y << std::endl;
        }
};

class Player : public Entitiy{
    std::string name;

    public:
        void NameSetter(const char* Name){
            name = Name;
        }
        void NameGetter(){
            std::cout << "The name of the player is -> " <<name << std::endl;
        }
};

int main(){
    //The Player copies everything from the Entity Class
    std::cout << sizeof(Entitiy) << std::endl;
    std::cout << sizeof(Player) << std::endl;

    Player player1;
    player1.NameSetter("Yashu");
    player1.NameGetter();
    player1.Move(5.0f,6.0f);

    return 0;
}