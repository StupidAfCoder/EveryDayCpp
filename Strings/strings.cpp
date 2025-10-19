#include<iostream>
#include<string>

int main() {
    
    const char* name = "Cool";
    // name[2] = 'G'; <- This throws an error
    std::cout << name << std::endl;

    //This is basically translated into ->
    char name2[6] = {'C','R','E','E','D', 0};
    //Here is '0' is the null character to reference where the string ends

    //For Simplicity just use string!!
    std::string player = "ThisisPlayer";
    std::cout << player << std::endl;
    std::cout << player.size() << std::endl;
    
    player += " Player1!";
    std::cout << player << std::endl;

    /*But You can't do this
        std::string player = "Player" + "Player21";
        Since now you are adding two const char pointers which is not possible
    */
    //But You can do this
    std::string control = "Control" + std::string("Cool");
    std::cout << control << std::endl;

    return 0;
}