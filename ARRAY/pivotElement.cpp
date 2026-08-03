#include<iostream>
using namespace std;

//smallest element index
int pivotElement(int arr[],int n){

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
    int arr[8] = {6,7,8,9,0,1,2,23};
    int n = sizeof(arr)/sizeof(int);
    cout<<"pivot element in rotated sorted array at index "<<pivotElement(arr,8);
}