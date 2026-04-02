#include<iostream>
using namespace std;

int main(){

	int n=4;

    // For number
    for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout << i+1 << " " ;
        }
	cout<<endl;
    }

	/*Output :
        1 
        2 2
        3 3 3
        4 4 4 4
    */ 

    // For *
    for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout << "*" << " " ;
        }
	cout<<endl;
    }

	/*Output :
        * 
        * *
        * * *
        * * * *
    */ 

    // For Character
    char ch = 'A';
    for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout << ch << " " ;
        }
        ch++;
	    cout<<endl;
    }

	/*Output :
        A 
        B B 
        C C C 
        D D D D 
    */ 
    
    
    return 0;
}