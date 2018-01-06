#include "2_7_5.h"

void celsius2degree(){

    double celsius( 0 ), fahrenheit( 0 );
    std::cout << "Please enter a Celsius value :\t";
    std::cin >> celsius;
    fahrenheit = celsius*1.8 + 32.0;
    std::cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
}


