#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> messages;
    string msg;
    while(cin>>msg){
        messages.push(msg);
        cout<<"Delivered: "<<messages.front()<<"\n";
        messages.pop();
    }
}
