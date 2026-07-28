#include<iostream>
using namespace std;
//peak element largest

int mountainArray(int arr[],int n){
    int start = 0 ;
    int end = n -1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = (start+end)/2;

    }
    return start;
    
    
}

int main(){

    int arr[5] = {2,3,4,5};

    int n = 4;

    cout << "Peak Element at index = " << mountainArray(arr,n) << endl;
    

    return 0;
}