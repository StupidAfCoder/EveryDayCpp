#include<iostream>
#include<vector>

struct Entitiy
{
    int x,y,z;
};

//So that the standard outstream understands how to process Enitity class
std::ostream& operator<<(std::ostream& stream , const Entitiy& entitiy){
    stream << entitiy.x << "," << entitiy.y << "," << entitiy.z;
    return stream;
}

int main(){

    std::vector<Entitiy> entitiy1;
    entitiy1.push_back({1,2,3});
    entitiy1.push_back({4,5,6});
    entitiy1.push_back({7,8,9});

    std::vector<Entitiy> entitiy2;
    for ( int i = 0 ; i < 8 ; i++){
        entitiy2.push_back({i+1,i+2,i+3});
    }

    for (int i = 0 ; i < entitiy1.size() ; i++){
        std::cout << entitiy1[i] << std::endl;
    }

    std::cout << std::endl;

    //Using a reference so that it doesn't copy the elements each time!!
    for (Entitiy& e : entitiy2){
        std::cout << e << std::endl;
    }


    return 0;
}