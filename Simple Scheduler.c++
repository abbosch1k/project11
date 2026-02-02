#include <iostream>
#include <chrono>
#include <thread>

int main(){
    for(int i=0;i<5;i++){
        std::cout<<"Task "<<i<<"\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
