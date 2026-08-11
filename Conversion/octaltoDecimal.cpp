#include<bits/stdc++.h>
using namespace std;

int getDecimal(int octal){
    int decimal = 0;
    int i = 0;
    while(octal != 0){
        int rem = octal%10;
        decimal+=rem*pow(8, i);
        octal/=10;
        i++;
    }

    return decimal;
}

int main(){
    int n;
    cin>>n;

    int result = getDecimal(n);

    cout<<result;

}