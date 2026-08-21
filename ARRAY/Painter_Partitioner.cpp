#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int PainterCount=1;
    int workAssi=0;

    for(int i=0;i<n;i++){
        if(arr[i] + workAssi <= mid)
       {
            workAssi+=arr[i];
       } 
       else{
        PainterCount++;
        if(PainterCount> m ){
            return false;
        }
        workAssi=arr[i];
       }
    }
    return true;
}
int patitioner(int arr[],int n,int m){
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
    int result = patitioner(arr,n,m);
    cout<<result;

}