#include<iostream>
using namespace std;

int firstUniqueEven(int arr[],int n) {
        int ans =0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                ans = ans ^ arr[i];
            }
            
        }
        return ans;
    }

int main(){

    int arr[7]={6,2,4,2,8,8};
    int n =7;
    cout<<firstUniqueEven(arr,n);
    return 0;
}