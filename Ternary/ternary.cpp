#include<iostream>
#include<string>

int main(){
    std::cout <<  "What is your name? ";
    std::string name;
    std::cin >> name;
    bool check{};
    check = name == "Yash" ? true : false;
    std::cout << check;
    return 0;
}