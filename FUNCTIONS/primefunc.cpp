#include<iostream>
using namespace std;

bool isprime(int num){
    if(num == 1){
        cout<<"is prime";
        return true;
    }

    for(int i =2;i<=num;i++){
        if(num%i == 0){
            return false;
        }

    }
    return true;

}

int main(){
    cout<<isprime(3);
    return 0;
}