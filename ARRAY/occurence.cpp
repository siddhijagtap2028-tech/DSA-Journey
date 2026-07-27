#include<iostream>
using namespace std;

// Only on sorted (monotonic) array

int firstOccurance(int arr[], int n, int key){
    int st = 0;
    int end = n - 1;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int lastOccurance(int arr[], int n, int key){
    int st = 0;
    int end = n - 1;
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid] == key){
            ans = mid;
            st = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){

    int arr[7] = {1,2,3,3,3,3,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "First Occurrence = " << firstOccurance(arr, n, 3) << endl;
    cout << "Last Occurrence = " << lastOccurance(arr, n, 3) << endl;
    

    return 0;
}