#include<iostream>
using namespace std;
int prod(int a ,int b){
    return(a*b);
}

int add(int a,int b,int c){
    return(a+b+c);
}

float diff(int a,float b){
    return(a-b);
}

int main(){
    cout<<prod(2,3)<<endl;;
    cout<<add(2,3,4)<<endl;
    cout<<diff(3,2.5);
    return 0;
}