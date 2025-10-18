#include<iostream>

class Jobs{
    public:
        int number;
        int salary;

        void Print(){
            std::cout << "This is the number of jobs when number is non static" << number << std::endl;
            std::cout << "This is the salary for each entity " << salary << std::endl;
        }
};

class Jobs2{
    public:
        static int number;
        static int salary;

        static void Print(){
            std::cout << "Number remains even after instances " << number << std::endl;
            std::cout << "Salary also remains as the last set value " << salary << std::endl;
        }
};

int Jobs2::number = 987;
int Jobs2::salary = 87600;

int main() {
    Jobs person1;
    person1.number = 4500;
    person1.salary = 67000;

    Jobs person2;
    person2.number = 2000;
    person2.salary = 500000;
    person1.Print();
    person2.Print();

    Jobs2 person3;
    person3.number = 78;
    person3.salary = 6700;

    Jobs2 person4;
    person4.number = 666;
    person4.salary = 90000000;
    person3.Print();
    person4.Print();


    return 0;
}