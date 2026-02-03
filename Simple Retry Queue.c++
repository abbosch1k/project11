#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    for(int i=1;i<=3;i++) q.push(i);
    while(!q.empty()){
        cout<<"Try "<<q.front()<<"\n";
        q.pop();
    }
}
