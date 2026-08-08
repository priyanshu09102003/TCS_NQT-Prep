#include<bits/stdc++.h>
using namespace std;

int getGCD(int a, int b){
    if(b == 0){
        return a;
    }

    else{
        return getGCD(b, a%b);
    }
}

int getLCM(int a, int b){
    return (a/getGCD(a,b))*b; //LCM * HCF = a*b
}

int main(){
    int a;
    cout<<"Enter the first number: ";

    cin>>a;

    int b;
    cout<<"Enter the second number: ";

    cin>>b;

    int ans = getLCM(a, b);

    cout<<ans;
}
