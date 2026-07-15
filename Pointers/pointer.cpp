#include<iostream>
using namespace std;

int main(){
    //dereference pointer
    int a = 10;
    int *ptr = &a;
    cout<<*ptr;

    //null pointer
    int *ptr = NULL;
    cout<<*ptr;
    return 0;
}