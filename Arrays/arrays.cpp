#include<iostream>

int main() {
    int example[7];
    for(int i = 0; i < 7 ; i++){
        example[i] = i;
    }
    std::cout << example[6] << std::endl;

    int* ptr = example;
    example[3] = 7;
    std::cout << example[3] << std::endl;

    //You can write the following example[3] = 7 in pointer arithmetic too!!
    *(ptr + 3) = 4;
    std::cout << example[3] << std::endl;
    //Since each int occupies 4 bytes here the 3 essentially means that the ptr has moved 12 bytes
    //You can write the same code using one byte types like char

    *(int*)((char*)ptr + 12) = 20;
    std::cout << example[3] << std::endl;

    //Here we changed the pointer to char then again to int and then dereference for the value

    /*You can also make arrays on the heap!!*/
    int* array = new int[6];
    for (int i = 0; i < 6 ; i++){
        array[i] = i+1;
    }

    std::cout << array[3] << std::endl;
    //Do not forget to delete the allocated space of the array
    delete[] array;

    //To find the size of an array (no. of elements)
    int count = sizeof(example) / sizeof(int);
    std::cout << count << std::endl;

    /*The Size of array returns the size of all the stored values so 6 multiplied by 4 that is 24 and the size of int is 4 bytes*/
    return 0;
}