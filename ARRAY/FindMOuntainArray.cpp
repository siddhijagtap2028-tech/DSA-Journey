#include<iostream>
using namespace std;
//find in mountain array

int peak(int arr[],int n){
     int start = 0;
        int end = n - 1;
        int mid = start +(end-start)/2;
        while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
}


int firstOcc(int target, int arr[],int n) {
        int start = 0;
        int end = n - 1;
        int mid = start +(end-start)/2;
        int ans = -1;
    
        while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}

int LastOcc(int start,int end ,int target, int arr[],int n) {
        
        int mid = start +(end-start)/2;
        int ans = -1;
    
        while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            start = mid +1;
        }
        else if(arr[mid] > target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}


int main(){

    int arr[7] = {1,2,3,4,5,3,1};

    int n = 7;

    int peaked = peak(arr,n);
    int ans = firstOcc(3,arr,peaked+1);
    if(ans!=-1){
        cout<< ans;
    }

    return LastOcc(peaked+1,6,3,arr,n);

    return 0;
}