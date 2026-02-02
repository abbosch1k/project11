#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> pool(5);
    int* obj = &pool.back();
    cout<<"Got object "<<obj<<"\n";
}
