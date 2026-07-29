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
    int arr[7] = {4,5,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<"pivot element at index "<<pivotElement(arr,7);
}