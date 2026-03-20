#include<iostream>
#include<string>

void bakepizza(){
    std::cout << "here is your Pizza" << '\n';
}
void bakepizza(std::string topping){
    std::cout << "here is your " << topping << " " << "Pizza" << '\n';
}
void bakepizza(std::string topping1 , std::string topping2){
    std::cout << "here is your " << topping1 << " "<< topping2 <<  " Pizza" << '\n';
}

int main(){

    bakepizza();
    bakepizza("paneer");
    bakepizza("butter" , "panner");
    return 0;
}