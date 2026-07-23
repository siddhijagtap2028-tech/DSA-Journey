#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int st = 0;
    int end = n-1;
    
    while(st<= end ){
        int mid = (st + end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            st = mid + 1;
        }
    }
}
int main(){
    int arr[6] = {2,4,6,7,9,10};
    int n = sizeof(int)/sizeof(arr);
    cout<<"key at index "<<BinarySearch(arr,6,9);
    
    return 0;
}