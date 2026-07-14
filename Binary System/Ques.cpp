#include <iostream>
using namespace std;

void BinaryDecimal(int binnum){
    int n = binnum;
    int decnum = 0;
    int pow =1;
    while(n>0){
        int dig = n %10;
        decnum  = dig*pow + decnum;
        pow = pow *2;
        n = n/10;
    }
    cout<<decnum;
    

}

int main(){
    BinaryDecimal(111111);
    cout<<endl;
    BinaryDecimal(10110);
    cout<<endl;
    BinaryDecimal(10011);
    cout<<endl;
    BinaryDecimal(110010);
    cout<<endl;
    BinaryDecimal(110011);

    return 0;

}