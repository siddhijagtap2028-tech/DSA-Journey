#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for (int i  = 0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
   
}
int main(){
    int n = 5;
    int arr[5]  = {1,2,3,4,5};
    int key  = 5;
    cout<<key<<" at index "<< linearSearch(arr,5,5);

    return 0;
}