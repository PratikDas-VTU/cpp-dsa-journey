#include<iostream>

class Stove {
    private:
        int temperature = 0;
    
    public:
        int getTemp(){
            return temperature;
        }
    void setTemp(int temperature){
        if(temperature<0){
            this->temperature = 0;
        } else if(temperature >= 10){
            this->temperature = 10;
        } else{
            this->temperature = temperature;
        }
        
    }
};

int main (){

    Stove stove;
    // stove.temperature = 100000;

    stove.setTemp(5);

    std::cout << "The temperature setting is: " << stove.getTemp() << '\n';
    return 0;
}