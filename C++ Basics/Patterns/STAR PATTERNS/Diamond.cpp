#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j =1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        
        int k =2;
        while(k<=i){
            cout<<"*";
            k++;
        }
        
        i++;
        cout<<endl;
    }
    
    i = n; 
    
    while(i>=1){
        int space = n-i; 
        while(space){
            cout<<" ";
            space--;
        }
        int j =1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        
        int k =2;
        while(k<=i){
            cout<<"*";
            k++;
        }
        
        i--;
        cout<<endl;
    }
}
