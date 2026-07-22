#include<iostream>
using namespace std;

int rev(int num){
    int reve = 0;
    int ans =0;
    while(num>0){
        int dig = num % 10;        //4 2 1
        if(ans > INT_MAX/10 || ans < INT_MIN/10){
            return 0;
        }
        ans = dig + ans * 10;    //4  42  421
        num = num /10;           //12      1 
    }
    cout<<ans;
}


int main(){
    rev(124);
    return 0;
}