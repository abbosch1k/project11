#include <iostream>
#include <string>
using namespace std;

int main(){
    string user, pass;
    cin>>user>>pass;
    if(user=="admin" && pass=="1234")
        cout<<"Access granted";
    else cout<<"Denied";
}
