#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

        int star = i-1;
        while(star){
            cout<<"*";
            star--;
        }
        
        int s = i-1;
        while(s){
            cout<<"*";
            s--;
        }

        int k = n-i+1;
        while(k>=1){
            cout<<k;
            k--;
        }
        i++;
        cout<<endl;
    }
}

/*

1234554321
1234**4321
123****321
12******21
1********1

*/