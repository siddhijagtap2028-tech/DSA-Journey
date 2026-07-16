#include<iostream>
using namespace std;

int main(){
    int marks[50];  //garbage
    int marks[50] = {1,2,3};
    int marks[] = {1,2,3};  //memory allocated at compile time statically

    //size
    int n = sizeof(marks)/sizeof(int);  // length
    cout<<sizeof(marks);  //each 4 bytes 

    

    return 0;
}