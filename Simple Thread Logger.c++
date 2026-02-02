#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;
void log(int id){
    lock_guard<mutex> g(m);
    cout<<"Thread "<<id<<" logged\n";
}

int main(){
    thread t1(log,1), t2(log,2);
    t1.join(); t2.join();
}
