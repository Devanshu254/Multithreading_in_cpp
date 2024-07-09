#include<bits/stdc++.h>
#include<thread>
using namespace std;
// Below if one thread.
void function1(char symbol) {
    for(int i=0;i<200;i++) {
        cout<<symbol;
    }
}
// Below is another thread.
void function2() {
    for(int i=0;i<200;i++) {
        cout<<"-";
    }
}
// Below is function 3.
void function3() {
    for(int i=0;i<200;i++) {
        cout<<"*";
    }
}
int main() {
    thread worker1(function1, '+');
    thread worker2(function2);
    thread worker3(function3);
    return 0;
}