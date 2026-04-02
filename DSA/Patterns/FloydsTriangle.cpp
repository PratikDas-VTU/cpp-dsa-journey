#include<iostream>
using namespace std;

int main(){
	int n=4;
    int num = 1;
    	for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout << num << " " ;
            num++;
        }
	cout<<endl;
    }

	/*Output :
        1 
        2 3 
        4 5 6 
        7 8 9 10  
    */ 

	
    char ch = 'A';
    	for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout << ch << " " ;
            ch++;
        }
	cout<<endl;
    }

	/*Output :
        A 
        B C 
        D E F 
        G H I J 
    */ 

    return 0;
}