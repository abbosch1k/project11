#include <iostream>
#include <thread>
#include <cstdlib>
using namespace std;

int main(){
    int d = rand()%3+1;
    this_thread::sleep_for(chrono::seconds(d));
    cout<<"Done after "<<d<<"s";
}
