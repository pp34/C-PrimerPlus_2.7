#include "2_7_1.h"

std::string MYNAME( "RD257" );
std::string MYADDR( "广州上元" );

void setName(const std::string nam){
    MYNAME = nam;
}

void showName(){
    std::cout << "Your name is:\t" << MYNAME << std::endl;
}

void setAddr( const std::string addr){
    MYADDR = addr;
}

void showAddr(){
    std::cout << "Your is:\t" << MYADDR << std::endl;
}