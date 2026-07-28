#include<iostream>
using namespace std;
//peak element largest

int mountainArray(int arr[],int n){
    int start = 0 ;
    int end = n -1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            return end;
        }
    mid = (start+end)/2;

    }
    
}

int main(){

    int arr[5] = {0,1,2,4,3};

    int n = 5;

    cout << "First Occurrence = " << mountainArray(arr,5) << endl;
    

    return 0;
}