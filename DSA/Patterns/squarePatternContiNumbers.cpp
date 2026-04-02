#include<iostream>
using namespace std;

int main(){

    int n=3;

    // For number
    int num = 1;


    for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=n-1;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

	/*Output :
        1 2 3 
        4 5 6 
        7 8 9 
        */ 
    
    cout << endl;

    // For Character
    char ch = 'A';
    for(int i = 0; i<= n-1; i++){
        
        for(int j =0;j<=n-1;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

	/*Output :
        A B C 
        D E F 
        G H I 
        */ 
    return 0;
}