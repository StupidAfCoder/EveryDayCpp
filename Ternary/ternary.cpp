#include <exception>
#include<iostream>
#include<string>

int main(){
    std::cout <<  "What is your name? ";
    std::string name;
    std::cin >> name;
    bool check{};
    //Basic
    check = name == "Yash" ? true : false;
    std::cout << check << std::endl;
    //Some Thing worse
    int score;
    std::cout << "Give me a defined score!" << std::endl;
    std::cin >> score;
    int current_score;
    std::cout << "Give me the current score" << std::endl;
    std::cin >> current_score;
    int get_score = current_score > score && score > 0 ? current_score < 100 ? 100 - current_score : current_score - score : 0;
    std::cout << get_score << std::endl;
    return 0;
}