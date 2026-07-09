#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        int j =1;
        
        while(j<=i){ 
            char ch='A'+i-1;   
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }

}
/*A 
B B
C C C*/