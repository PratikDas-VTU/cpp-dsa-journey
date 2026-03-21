#include<iostream>

int main(){
    // dynamic memory = Memory that is allocated after the program
    // is already compiled.& running.
    // Use the 'new' operator to allocate
    // memory in the heap rather than the stack

    // Useful when we don't know how much memory
    // we will need. Makes our programs more flexible,
    // especially when accepting user input.

    int *pNum = NULL ;
    pNum = new int ;
    *pNum = 21 ;
    std::cout << "Address: "<< pNum << '\n';
    std::cout << "Value: "<< *pNum << '\n';

    // Example 2

    char *pGrade = NULL ;
    
    int size;
    std::cout << "Enter the number of Grades: ";
    std::cin >> size;
    
    pGrade = new char[size];

    for(int i = 0; i < size ; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrade[i];
    }

    for (int i = 0; i < size ; i++){
        std::cout << pGrade[i] << " ";
    }

    

    delete pNum;
    delete pGrade;
    return 0;
}