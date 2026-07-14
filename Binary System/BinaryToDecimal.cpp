#include <iostream>
using namespace std;

void BinaryDecimal(int binNum){
    int n = binNum;
    int decnum = 0;
    int pow = 1;

    while(n>0){
        int ld = n % 10;
        decnum = ld*pow+decnum;
        pow = pow * 2;
        n = n / 10;
    }
    cout<<decnum;
    

}

int main(){
    BinaryDecimal(101);
    return 0;

}