#include<iostream>
using namespace std;
//peak element largest

int mountainArray(int arr[],int n){
    int start = 0 ;
    int end = n -1;
    int mid = start+(end - start)/2;
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start+(end - start)/2;

    }
    return start;
    
}

int main(){

    int arr[4] = {0,10,5,2};

    int n = 4;

    cout << "Peak Element at index = " << mountainArray(arr,n) << endl;
    

    return 0;
}