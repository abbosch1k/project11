#include <iostream>
#include <filesystem>
#include <chrono>
#include <thread>

namespace fs = std::filesystem;
int main(){
    auto last = fs::last_write_time("test.txt");
    while(true){
        auto now = fs::last_write_time("test.txt");
        if(now != last){
            std::cout<<"File changed\n";
            last = now;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
