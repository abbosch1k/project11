#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream f("config.cfg");
    std::string k,v;
    while(f>>k>>v)
        std::cout<<k<<" = "<<v<<"\n";
}
