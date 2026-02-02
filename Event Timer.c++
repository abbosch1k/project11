#include <iostream>
#include <chrono>
using namespace std;

int main(){
    auto start = chrono::steady_clock::now();
    cin.get();
    auto end = chrono::steady_clock::now();
    cout<<"Seconds: "
        <<chrono::duration_cast<chrono::seconds>(end-start).count();
}
