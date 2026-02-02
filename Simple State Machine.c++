#include <iostream>
using namespace std;

int main(){
    enum State{IDLE,RUN,STOP};
    State s=IDLE;
    s=RUN;
    cout<<(s==RUN?"Running":"Idle");
}
