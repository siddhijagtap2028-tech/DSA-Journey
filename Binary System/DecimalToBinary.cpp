#include <iostream>
using namespace std;

void DecimalBinary(int decnum){
    int n = decnum;
    int binnum = 0;
    int pow = 1;

    while(n>0){
        int ld = n % 2;
        binnum = ld*pow+binnum;
        pow = pow * 10;
        n = n / 2;
    }
    cout<<binnum;
    

}

int main(){
    DecimalBinary(5);
    return 0;

}