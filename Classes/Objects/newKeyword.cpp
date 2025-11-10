#include <cstdlib>
#include <iostream>

class Dummy{
    private:
        int number;
    public:
        Dummy() : number(0){}
        Dummy(int& num) : number(num) {}
        const int& getNumber() {
            return number;
        }
        void setNumber(int& num) {
            num = number;
        }
};

int main() {
    //New Keyword is used to store types on the heap whether that be a primitive data type or a class or a array etc.!!
    //New Keyword is an opertor so It can be OVERLOADED and all it does is return a void pointer and reserve the space required!
    int a = 5;
    int*b = new int; //Stored b in the heap!
    int*array = new int[50]; //stored an int array of 50 elements in the heap!

    Dummy* dummy = new Dummy();

    //So behind the scene what new is doing is setting the memory allocated for the dummy class and remeber this is important CALLING THE CONSTRUCTOR!!!!
    //This is the main difference between using new other than using the following command
    Dummy* dumm1 = (Dummy*) malloc(sizeof(Dummy));
    
    
    //This reserves the space required for the class but doesn't call the constructor!!!
    //But Always use new other than very specific instances because code readability!!
    

    //NEVER FORGET TO DELETE THE MEMORY AFTER USING NEW!!!!
    delete dumm1;
    delete dummy;
    delete b;
    delete[] array; //delete an array initialised by new using [] !!
    return 0;
}