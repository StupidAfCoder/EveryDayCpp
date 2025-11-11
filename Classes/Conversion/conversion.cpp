#include <cerrno>
#include <iostream> 
#include <string>


class Entity{
    private:
        std::string m_Name;
        int Age;
    public:
        Entity(const std::string& name) : m_Name(name) , Age(0) {}
        Entity(int age) : Age(age) , m_Name("Unknown") {}

        const std::string& getName() const { return m_Name; }
};

class Dummy {
    private:
        int stuff;
    public:
        explicit Dummy(int Stuff) : stuff(Stuff) {}
        Dummy() : stuff(0) {}
};

void PrintEntity(const Entity& entity){
    //Cool Priniting Stuff!!
    std::cout << entity.getName() << std::endl;
}

int main() {
    //To understand implicit conversion look at this 
    //You can create a entity object like this 
    Entity e1("Cool"); //Or like this too Entity e1 = Entity("Cool");
    Entity e2(19);

    //You can also create an entity using this!!
    Entity a = 33; //Why?? Because C++ implicitly converts this age from int to a entity!!!!

    //But you can't do this
    //Entity b = "Cool" 
    //Why?? Because here currently "Cool" is not an std::string instead it is an const char array!! (Read the strings file!)

    //But You can do this
    Entity b = std::string("Cool");
    //Here C++ recongnises std::string and converts it into Entity

    //Same is with functions!!
    PrintEntity(56); //THIS IS CORRECT !!!!!! (C++ only cares about if it can be converted into entity or not and here this int can be!!)
    //PrintEntity("cool") //This is wrong
    PrintEntity(std::string("Cool")); //This is correct!

    //Also this
    PrintEntity(Entity("cool"));

    //If you want to disable this you can make the constructor EXPLICIT which means it won't be automatically converted
    
    // Dummy dum = 22; This will raise an error in dummy class as we have made the constructor explicit!!
    //You have to do this
    Dummy dum = Dummy(3);
    //Or the normal
    Dummy dum1(3); 

    return 0;
}