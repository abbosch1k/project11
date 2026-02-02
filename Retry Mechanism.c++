#include <iostream>
using namespace std;

bool request(){
    static int c=0;
    return ++c==3;
}

int main(){
    for(int i=0;i<5;i++){
        if(request()){
            cout<<"Success\n";
            break;
        }
        cout<<"Retry\n";
    }
}
