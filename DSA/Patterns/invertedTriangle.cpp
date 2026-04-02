#include<iostream>
using namespace std;

int main(){

	int n=4;

    for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout <<" ";
        }
        for(int j =0;j<=n - i -1;j++){
            cout << i+1;
        }
	    cout<<endl;
        
    }

	/*Output :
         1111
          222
           33
            4
        */ 
    char ch = 'A';
    for(int i = 0; i<= n-1; i++){
        for(int j =0;j<=i;j++){
            cout <<" ";
        }
        for(int j =0;j<=n - i -1;j++){
            cout << ch;
            
        }
        ch++;
	    cout<<endl;
        
    }

	/*Output :
         1111
          222
           33
            4
        */ 
    return 0;
}