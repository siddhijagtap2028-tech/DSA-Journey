#include<iostream>
using namespace std;

//pass by value
void changeA(int a){
    a=20;
    cout<<a<<endl;
}

int main(){
    int a =10;
    changeA(20);

    cout<<a;
    return 0;
}