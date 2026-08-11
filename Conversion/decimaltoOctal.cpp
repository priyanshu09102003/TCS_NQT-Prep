#include<bits/stdc++.h>
using namespace std;

int getOctal(int decimal){
    if(decimal == 0){
        return 0;
    }

    string octal = "";
    int n = decimal;

    while(n>0){
        int remainder = n%8;
        octal = to_string(remainder)+octal;
        n/=8;
    }

    int ans = stoi(octal);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int result = getOctal(n);

    cout<<result;
}