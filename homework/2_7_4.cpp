#include "2_7_4.h"

int inputAge(){
    int age( 0 );
    std::cout << "Enter your age:\t" << std::endl;
    std::cin >> age;
    return age;
}

int age2month( int age ){
    int month( 0 );
    month = age * 12;
    return month;
}

void outputMonth(int month){
    std::cout << "Months is:\t" << month << std::endl;
}
