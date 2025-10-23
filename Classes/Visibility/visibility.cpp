#include<iostream>
#include<string>

/*
  Public -> EveryOne
  Protected -> Class And SubClasses
  Private -> Only the class
*/

class Entity{
    private:
        unsigned int id;
    protected:
        void setID(unsigned int& ID){
            id = ID;
        }
        unsigned int getID(){
            return id;
        }
    public:
        void PrintClass(){
            std::cout << "Entity" << std::endl;
        }
};

class Player : public Entity{
    private:
        unsigned int reference;
    public:
        void setRef(unsigned int ref){
            reference = ref;
            setID(reference);
        }
        void PrintID(){
            int temp = getID();
            std::cout << "The value for the id of this player object is -> " << temp << std::endl;
        }
};

int main(){
    Entity* e = new Entity();
    e->PrintClass();
    Player* player1 = new Player();
    player1 -> setRef(4557);
    player1 -> PrintID();
    return 0;
}