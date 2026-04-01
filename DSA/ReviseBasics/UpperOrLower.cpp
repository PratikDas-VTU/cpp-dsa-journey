#include<iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter a Character:";
    cin >> ch;

    // Method 1 for checking - char to int conversion and value checking
    if(ch>='a' && ch<='z'){
        cout << "Lower Case!! \n";
    } else {
        cout << "upper Case!! \n";
    }

    // Method 2 for checking - using ASCII value 
    //     Lowercase 'a' - 'z': The ASCII value is 97-122.
    //     Uppercase 'A' - 'Z': The ASCII value is 65-91. 

    if(ch>=97 && ch<=122){
        cout << "Lower Case!! \n";
    } else {
        cout << "upper Case!! \n";
    }

    return 0;
}