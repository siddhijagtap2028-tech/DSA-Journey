#include<iostream>
using namespace std;

void ReverseArray(int arr[], int n){
   
    for (int st = 0, end = n-1;  st<end;  st++,end--){
        swap(arr[st],arr[end]);
        
}
}
int main(){
    int n = 5;
    int arr[5]  = {1,2,3,4,5};
    ReverseArray(arr,5);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}