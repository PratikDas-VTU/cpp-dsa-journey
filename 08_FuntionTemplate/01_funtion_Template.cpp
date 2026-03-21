#include<iostream>
template<typename T , typename U>
auto max(T x , U y){
    return (x>y) ? x : y;
}
int main(){


    std::cout<< max( 1 , 2 ) << '\n';
    std::cout<< max( 11.3 , 2.6 ) << '\n';
    
    
    std::cout<< max( 151.0 , 2 ) << '\n';


    return 0;
}