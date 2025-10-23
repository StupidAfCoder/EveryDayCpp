#include<iostream>
#include<string>
//This has become an interface that needs to have all it's method implemented for the class extending it to use!!!!
class Interface {
    public:
        virtual std::string displayClass() = 0;
};

class Player : public Interface {
    private:
    float X = 0.0f , Y = 0.0f;
    public:
        float getX(){
            return X;
        }

        float getY(){
            return Y;
        }

        void SetXY(float x , float y){
            X = x;
            Y = y;
            std::cout << "The value has been set!! " << X << " " <<  Y << std::endl;
        }

        std::string displayClass() override {
            return "Player";
        }
};

class Enemy : public Interface {
    public:
        std::string displayClass() override {
            return "Enemy";
        }
};

void PrintClass(Interface* obj){
    std::cout << obj -> displayClass() << std::endl;
}

int main(){
    Player* player1 = new Player();
    Enemy* enemy1 = new Enemy();
    PrintClass(player1);
    PrintClass(enemy1);

    player1 -> SetXY(1.2F,1.3F);
    return 0;
}