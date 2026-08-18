#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int st=0;
    int end=n-1;
    int mid=st+(end-st)/2;
    while(st<end){
        if(arr[mid]<arr[mid+1]){
            st = mid+1;
        }
        else{
            end=mid;
        }
        mid=st+(end-st)/2;
    }
    return st;

}

int fo(int arr[],int n,int target,int st,int end){
    st=0,end=n-1;
    int mid=st+(end-st)/2;
    int ans=-1;
    while(st<=end){
        if(arr[mid] == target){
            ans=mid;
            end=mid-1;

        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
        mid=st+(end-st)/2;
    }
    return ans;

}

int lo(int arr[],int n,int target,int st,int end){
    st=0,end=n-1;
    int mid=st+(end-st)/2;
    int ans=-1;
    while(st<=end){
        if(arr[mid] == target){
            ans=mid;
            st=mid+1;

        }
        else if(arr[mid]>target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=st+(end-st)/2;
    }
    return ans;

}
int main(){
    int arr[7]={1,2,3,3,7,8,5};
    int n =7;
    int peaked=peak(arr,n);
    cout<<peaked;
    cout<<fo(arr,n,3,0,n-1)<<endl;
    cout<<lo(arr,n,3,0,n-1)<<endl;

}