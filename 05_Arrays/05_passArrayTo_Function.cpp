#include<iostream>


double getTotal(double prices[],int size){
    double total = 0;

    for(int i = 0; i<size;i++){

        total += prices[i];
    }
    return total;
}


int main(){

    double prices[] = {62.3,15.45,95.74,16.94};
    
    int size = sizeof(prices)/sizeof(prices[0]);

    double total = getTotal(prices,size);

    std::cout << "Total : " << total ;

    return 0;
}

