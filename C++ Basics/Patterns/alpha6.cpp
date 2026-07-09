#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
   
    while(i<=n){
        int j =1;
         char ch='A';
        while(j<=i){ 
               
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }

}
/*A 
B C 
D E F 
G H I J */