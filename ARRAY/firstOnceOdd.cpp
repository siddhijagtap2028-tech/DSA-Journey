#include<iostream>
using namespace std;

int firstUniqueOdd(int arr[],int n) {
        int ans =0;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                ans = ans ^ arr[i];
            }
            return ans;
        }
        return -1;
        
    }

int main(){

    int arr[7]={3,2,2,4,5,5};
    int n =7;
    cout<<firstUniqueOdd(arr,n);
    return 0;
}