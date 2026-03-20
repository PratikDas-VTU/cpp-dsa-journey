#include <iostream>

int main()
{

    // fill() = Fills a range of elements with a specified value
    //         fill(begin, end, value)

    const int SIZE = 66;
    std::string Array[SIZE];

    fill(Array, Array + (SIZE / 3), "BMW");
    fill(Array + SIZE / 3, Array + (SIZE / 3) * 2, "Audi");
    fill(Array +(SIZE / 3) * 2, Array + SIZE, "Dodge");

    for(std::string element : Array){
        std::cout << element << '\n';
    }
    return 0;
}