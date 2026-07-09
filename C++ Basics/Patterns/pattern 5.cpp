#include<iostream>
using namespace std;

int main(){
    int n =4;
    int i=1;
    int num =1;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<num<<" ";
            num++;
            j++;

        }
        i++;
        cout<<endl;
    }
    
}
/*1 
2 3 
4 5 6 
7 8 9 10 */