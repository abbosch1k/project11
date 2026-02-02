#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> history;
    string cmd;
    while(true){
        cin>>cmd;
        if(cmd=="exit") break;
        if(cmd=="history"){
            for(auto &c:history) cout<<c<<"\n";
        } else history.push_back(cmd);
    }
}
