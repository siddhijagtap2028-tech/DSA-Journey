#include<iostream>
using namespace std;

void add(int arr[], int n,int key){
    for(int i =0 ; i<n ; i++){
        for(int j = i+1; j<n ; j++){
            if((arr[i]+ arr[j])==key){
                cout<<i<<j<<endl;
                return;
        }
    }  
    }
    
}

int main(){
    int arr[5] = {1,4,3,2,6};
    

    add(arr,5,4);
    
    return 0;
}