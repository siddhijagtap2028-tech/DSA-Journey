#include<iostream>
using namespace std;
int linear(int arr[],int n,int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
        
    }
    return -1;
}



int main(){
    int arr[5] = {1,4,0,8,9};
    int n = sizeof(int) / sizeof(arr);
    cout<<"key at index "<<linear(arr,5,9);
}