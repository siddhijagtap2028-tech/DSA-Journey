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

int binarySearch(int arr[],int s,int end,int target){
    int mid=s+(end-s)/2;
    while(s<=end){
        if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        s = mid +1;
    }
    else{
        end= mid-1;
    }
    return -1;
    }
    
}
int main(){
    int arr[5] = {4,5,1,2,3};
    int target = 2;
    int n = sizeof(arr)/sizeof(int);
    int pivot = pivotElement(arr,5);
    if(target>=arr[pivot] && target<=arr[n-1]){
        cout<<binarySearch(arr,pivot,n-1,target);
    }
    else{
        cout<<binarySearch(arr,0,pivot-1,target);

    }
    return 0;
}