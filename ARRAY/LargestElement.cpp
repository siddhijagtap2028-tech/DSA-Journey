#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5]= {5,4,3,9,2};
    int max=arr[0];
    for (int i =0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
        
    }
    cout<<"max is "<<max;

    return 0;
}