#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int i = 1;
   
    while(i<=n){
        int j =1;
         char ch='D'-i+1;
        while(j<=i){ 
               
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }

}
/*D 
C D 
B C D 
A B C D */