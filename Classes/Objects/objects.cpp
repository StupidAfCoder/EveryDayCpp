#include<iostream>

using String = std::string;

class Entity{
    private:
        String name;
    public:
        Entity() : name("Someone") {}
        Entity(const String& m_Name) : name(m_Name) {}

        const String& GetName() const {return name;}
};

int main(){
    
    //These entities are stored in the stack meaning if the scope that they are declared in ends they also gets freed from the memory!!!
    Entity entity;
    std::cout << entity.GetName() << std::endl;
    Entity entity1("Cool!");
    std::cout << entity1.GetName() << std::endl;


    //To demonstrate this 
    Entity* e; //Pointer pointing to an memory address of entity
    {
        Entity en;
        e = &en; //Pointing to the memory address of the en
        std::cout << en.GetName() << std::endl;
        std::cout << e << std::endl;
    } // Declared an scope inside the main function ( this is one of the ways where scope function more in this in other files!!)

    // std::cout << en.GetName() << std::endl; This result in an error since the object was destroyed from the stack!!
    std::cout << e << std::endl; //Pointer still exists pointing to the same memory address but now the memory is freed!!

    //We can also allocate on the heap 
    //IMPORTANT!!!! If you can allocate on the stack always I mean ALWAYS ALLOCATE ON THE STACK good for performance!!
    {
        Entity* en = new Entity("C++");
        /*
            Two Things here 
            First the new keyword it allocates on the heap there is another file just to learn new keyword.
            Second it stores an pointer to the memory address of where the object is stored in the heap!!!
        */
        e = en;
        // -> arrow keyword also works!!
        std::cout << (*en).GetName() << std::endl;
    }

    delete e;
    return 0;

}