#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool ispos(int arr[],int n,int k,int mid){
    int cowCount =1;
    int firstPos = arr[0];

    for(int i=0;i<=n;i++){
        if(arr[i]-firstPos >= mid){
            cowCount++;
            if(cowCount>k){
                return true;
            }
            firstPos=arr[i];

        }
    }
}
int aggreCows(int arr[],int n,int k){
    sort(arr.begin(),arr.end());
    int s = 0;
    int fistpos = arr[0];
    int maxi = -1;
    for(int i=0;i<=n;i++){
        maxi=max(arr[i],maxi);
    }
    int end = maxi;
    int ans=-1;
    while(s<=end){
        int mid=s+(end-s)/2;
        if(ispos(arr,n,k,mid)){
            ans =mid;
            s=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[5] = {4,2,1,3,6};
    int n = 5;
    int k =2;
    aggreCows(arr,n,k);

}