#include "2_7_6.h"

void ly2au(){

    double ly( 0 ), au( 0 );
    std::cout << "Please enter the number of light years :\t";
    std::cin >> ly;
    au = ly*63240;
    std::cout << ly << " light years = " << au << " astronomical units." << std::endl;
}