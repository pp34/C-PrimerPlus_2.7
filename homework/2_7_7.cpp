#include "2_7_7.h"

void showTime(){
    int hour( 0 ), min( 0 );
    std::cout << "Enter the number of hours:\t";
    std::cin >> hour;
    std::cout << "Enter the number of minutes:\t";
    std::cin >> min;
    std::cout << "TIME: " << hour << ':' << min << std::endl;
}

