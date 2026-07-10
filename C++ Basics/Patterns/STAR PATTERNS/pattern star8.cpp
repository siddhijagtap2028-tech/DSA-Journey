#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    char ch = 'A';
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<ch;
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
}

/*

A
BC
DEF
GHIJ

*/