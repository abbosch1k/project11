#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("config.cfg");
    cout<<(f.good()?"Config OK":"Missing config");
}
