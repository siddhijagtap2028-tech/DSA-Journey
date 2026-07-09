#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1;
    int num = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<num<<" ";
            num++;
            j++;
        }
        i++;
        cout<<endl;
    }

}