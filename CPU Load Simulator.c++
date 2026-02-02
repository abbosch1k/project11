#include <iostream>
#include <cmath>

int main(){
    volatile double x=0;
    for(long i=0;i<1e8;i++)
        x+=sin(i);
    std::cout<<"Done\n";
}
