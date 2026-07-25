#include<iostream>
using namespace std;
int pivotBinary(int arr[],int n){

    int s=0;
    int end=n-1;
    while(s<end){
        int mid=s+(end-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            end=mid;
        }
        mid=s+(end-s)/2; 
}
return s;
    
}
int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<pivotBinary(arr,7);
}