#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;
    string cmd;
    while(cin>>cmd){
        if(cmd=="add"){ string t; cin>>t; q.push(t); }
        if(cmd=="run" && !q.empty()){
            cout<<"Run "<<q.front()<<"\n";
            q.pop();
        }
    }
}
