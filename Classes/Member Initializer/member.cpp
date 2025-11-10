#include<iostream>

class Example{
    public:
        Example(){
            std::cout << "Created Example!!" << std::endl;
        }

        Example(int x){
            std::cout << "Created Example with " << x << std::endl;
        }
};

class Entity{
    private:
        std::string m_Name;
        int m_Score;
        Example m_Example;
    public:
        //Member Intializer helps you to initilaise your members by adding an colon to the constructor ( Remember!!! To Do This in Order!!!)
        Entity()
        { 
             m_Example = Example(6);
        }
        Entity(const std::string& name , int Score)
            : m_Name(name) , m_Score(Score)
        {
            /*m_Name = name;
            m_Score = Score;*/ // Instead of this we use the member initializer!!
        }

        const std::string& getName() const {
            return m_Name;
        }

        const int& getScore() const {
            return m_Score;
        }
};

//Why Should You use member initializer?? TO IMPROVE PERFORMANCE!! Here is an example!!
//Here the example class will have to make two instances of the constructors or to be precise first will be the default constructor and then the actual constructor!!
//Output is Created Example!! and then Created Example with 6!! We therefore initialise with member constructors to avoid this duplication!!

int main(){
    Entity zero;    

    return 0;
}