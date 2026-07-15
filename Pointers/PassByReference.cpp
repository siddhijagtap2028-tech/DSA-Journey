#include<iostream>
using namespace std;

//oass by refer  changes are made in original address itself
void changeA(int *ptr){
    *ptr=20;
    cout<<*ptr<<endl;
}

int main(){
    int a =10;
    changeA(&a);

    cout<<a;
    return 0;
}

//20
//20