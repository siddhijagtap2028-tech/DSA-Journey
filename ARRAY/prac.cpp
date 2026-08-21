#include<iostream>
using namespace std;
bool ispos(int arr[],int n,int m,int mid){
    int studc=1;
    int pagesum=0;
    for(int i=0;i<n ;i++){
        if(arr[i]+pagesum <= mid){
        pagesum+=arr[i];
        }
        else{
            studc++;
            if(studc > m){
                return false;
            }
            
            pagesum=arr[i];
        }
    }
    return true;
    
}
int bookallo(int arr[],int n,int m){
    int sum =0;
    for(int i=0;i<n ;i++){
        sum+=arr[i];
    }
    int s=0,end=sum;
    int ans=-1;
    while(s<=end){
        int mid =s+(end-s)/2;
        if(ispos(arr,n,m,mid) ){
            ans=mid;
            end = mid-1;
        }
        else{
            s=mid+1;
        }

    }
    return ans;
}
int main(){
    int arr[5]={10,20,30,40};
    int n =5;
    int m =2;
    int result = bookallo(arr,n,m);
    cout<<result;
    return 0;


}