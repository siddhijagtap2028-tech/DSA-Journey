#include<iostream>
using namespace std;

/*when an array is passed to a function, it automatically decays into a pointer to its first element.
ptr is an identifier*/
void func1(int arr[]){
    arr[1]= 1000;
}

void func2(int *ptr){
    ptr[1]= 1000;
}


int main(){
    int n = 5;
    int arr[5]= {5,4,3,9,2};
    cout<<arr<<endl;
    func1(arr);
    cout<<arr[1]<<endl;

    func2(arr);
    cout<<arr[1];
    return 0;
}