#include "2_7_2.h"

int inputLong(){
    int _long = 0;
    std::cout << "Please Input Longs:\t" << std::endl;
    std::cin >> _long;
    return _long;
}


int long2yard( int _long ){
    
    int yard;
    yard = _long * 220;
    return yard;
}

void outputYard(int yard){
    std::cout << "Yard:\t" << yard << std::endl;
}