#include<iostream>
using namespace std;

//only on monotonic func either inc or dec order 
int BinarySearch(int arr[],int n,int key){
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = (st+end) / 2; //start + (end-start)/2  if large numbers are present  

        if ( arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        else{
            st = mid+1;
        }
    }
    return -1;
    
}
int main(){
    int arr[5] = {3,5,9,13,27};
    int n = sizeof(int)/sizeof(arr);
    cout<<"key at index "<<BinarySearch(arr,5,27);
    
    return 0;
}