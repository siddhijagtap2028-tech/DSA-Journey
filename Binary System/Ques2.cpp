#include <iostream>
using namespace std;

void DecBin(int decnum){
    int n = decnum;
    int binnum = 0;
    int pow =1;
    while(n>0){
        int dig = n % 2;
        binnum  = dig*pow + binnum;
        pow = pow * 10;
        n = n/2;
    }
    cout<<binnum;
    

}

int main(){
    DecBin(25);
    cout<<endl;
    DecBin(49);
    cout<<endl;
    DecBin(31);
    cout<<endl;
    DecBin(88);
    cout<<endl;
    DecBin(58);
    return 0;

}