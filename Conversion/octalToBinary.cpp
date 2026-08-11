#include<bits/stdc++.h>
using namespace std;

//First, convert to decimal

int getDecimal(int octal){
    int decimal = 0;
    int base = 1;

    while(octal!=0){
        int rem = octal%10;
        decimal+=rem*base;
        octal/=10;
        base*=8;


    }

    return decimal;

}

//Convert the decimal to binary

int getBinary(int decimal){
    int binary = 0;
    int base = 1;

    while(decimal!=0){
        int rem = decimal%2;
        binary+=rem*base;
        decimal/=2;
        base*=10;

    }

    return binary;
}



int main(){

    int n;
    cin>>n;

    int getDecimalNumber = getDecimal(n);
    int binaryNumber = getBinary(getDecimalNumber);


    cout<<binaryNumber;

}