#include<iostream>
using namespace std;

void funcEvenOdd(int n){
    if(n%2==0){
        cout<<"num is even";
        
    }
    else{
        cout<<"num is odd";
        
    }
}
int main(){
    funcEvenOdd(3);
    return 0;
}