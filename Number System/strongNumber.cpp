#include<bits/stdc++.h>
using namespace std;

int factorial(int digit){
    if(digit<=1){
        return 1;
    }

    return digit*factorial(digit-1);
}

bool checkStrongNumber(int n){
    int orginal = n;
    int sum = 0;

    while(n>0){
        int digit = n%10;
        sum+=factorial(digit);
        n/=10;
    }

    return sum == orginal;
}

int main(){
    int n;
    cout<<"Enter the number: ";

    cin>>n;

    cout<<checkStrongNumber(n);

}