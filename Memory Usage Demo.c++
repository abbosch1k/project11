#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0;i<1e6;i++) v.push_back(i);
    cout<<"Allocated "<<v.size()<<" ints\n";
}
