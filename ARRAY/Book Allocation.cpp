#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;

    for(int i=0;i<n;i++){
        if(arr[i] + pageSum <= mid)
       {
            pageSum+=arr[i];
       } 
       else{
        studentCount++;
        if(studentCount> m ){
            return false;
        }
        pageSum=arr[i];
       }
    }
    return true;
}
int book(int arr[],int n,int m){
    int start =0;
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;

        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[4]={10,20,30,40};
    int m = 2;
    int n=4;
    int result = book(arr,n,m);
    cout<<result;

}