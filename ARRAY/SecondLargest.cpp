#include<iostream>
using namespace std;

int SecondLargest(int arr[],int n){
    int largest=arr[0];
    int secLargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secLargest){
            secLargest = arr[i];
        }
    }
    return secLargest;
}

int SecondSmallest(int arr[],int n){
    int smallest=arr[0];
    int secSmall = -1;
    for(int i=0;i<n;i++){
        if(arr[i] < smallest){
            secSmall = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secSmall){
            secSmall = arr[i];
        }
    }
    return secSmall;
}
int main(){
    int arr[5]={9,13,1,2,8};
    int n =5;
    cout<<SecondLargest(arr,n)<<endl;
    cout<<SecondSmallest(arr,n)<<endl;
    return 0;


}