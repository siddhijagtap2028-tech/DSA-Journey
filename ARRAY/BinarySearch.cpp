#include<iostream>
using namespace std;

//only on monotonic func either inc or dec order 
int BinarySearch(int arr[],int n,int key){
    int st = 0;
    int end = n;
    while(st<=end){
        int mid = (st+end) / 2;

        if ( arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            return end = mid -1;
        }
        else{
            return st = mid+1;
        }
    }
    
}
int main(){
    int arr[5] = {3,5,9,13,27};
    int n = sizeof(int)/sizeof(arr);
    cout<<"key at index "<<BinarySearch(arr,5,9);
    
    return 0;
}