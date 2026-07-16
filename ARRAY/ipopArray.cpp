#include<iostream>
using namespace std;

int main(){
//give output


    int arr [5] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(int);
    for(int i =0 ; i<=n-1 ; i++){
        cout<<arr[i]<<endl;
    }


//take input
    int m;
    cout<<"enter length of array";
    cin>>m;
    int marks[m];
    for(int i = 0;i<=m-1 ; i++){
        cin>>marks[i];
    }
    for(int i =0 ; i<=m-1 ; i++){
        cout<<"marks "<<marks[i]<<endl;
    }
    cout<<endl;

    return 0;
}