#include<iostream>

int main(){
    //const helps firstly by making an constant variable that cannot be changed!!
    const int MAX_VALUE = 78;

    //For any pointer you can change the value of the pointer or the address of the pointer
    int a = 56;
    int* p_a = &a;
    std::cout << "Before changing the value" << a << std::endl;
    *p_a = 545;
    std::cout << "After changing the value" << a << std::endl;
    int b = 78;
    p_a = &b;
    std::cout << "Changing the address of the pointer" << *p_a << std::endl;

    //Now if the pointer is constant!!
    // Pointer-to-const: you cannot change the value pointed-to, but you can change the pointer
    const int* ptr_to_const = &b; // same as "int const* ptr_to_const"
    // You can change which address the pointer holds:
    ptr_to_const = &a; // OK
    // But you cannot change the value through the pointer:
    // *ptr_to_const = 56; // ERROR: assignment of read-only location '*ptr_to_const'

    // Const-pointer to (non-const) int: the pointer itself is constant, but the pointee can be modified
    int* const const_ptr = &a; // pointer is const, pointee (a) is mutable
    // const_ptr = &b; // ERROR: cannot change a const pointer's address
    *const_ptr = 90; // OK: modifies 'a'ṇṇ
    return 0;
}