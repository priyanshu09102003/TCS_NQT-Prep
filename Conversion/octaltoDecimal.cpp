#include<bits/stdc++.h>
using namespace std;

int getDecimal(int octal){
    int decimal = 0;
    int base = 1;
    while(octal != 0){
        int rem = octal%10;
        decimal += rem*base;
        octal/=10;
        base *= 8;
    }

    return decimal;
}

int main(){
    int n;
    cin>>n;

    int result = getDecimal(n);

    cout<<result;

}