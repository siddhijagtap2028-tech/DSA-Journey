#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
bool ispos(int arr[],int n,int m, int mid){
    int startpos=arr[0];
    int studCount =1;
    for(int i=0;i<n;i++){
        if(arr[i]+startpos >= mid){
            studCount++;
            if(studCount>=m){
                return true;
            }
            startpos=arr[i];
        }
    }
    return false;

}
int book(int arr[],int n,int m){
    int start =0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid =start+(end-start)/2;
        if (ispos(arr,n,m,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[4]={1,2,3,4};
    int n =4;
    int m =2;
    cout<<book(arr,n,m );
    return 0;
}