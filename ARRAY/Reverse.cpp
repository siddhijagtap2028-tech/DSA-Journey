#include<iostream>
using namespace std;

void ReverseArray(int arr[],int cp[], int n){
    
    for (int i  = 0;i<n;i++){
      
       cp[i]=arr[n-1-i];

}
}
int main(){
    int n = 5;
    int arr[5]  = {1,2,3,4,5};
    int cp[5];
    

    ReverseArray(arr,cp,n);
    for(int i = 0;i<n;i++){
        cout<<cp[i]<<endl;
    }

    return 0;
}