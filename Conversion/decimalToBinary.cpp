#include<bits/stdc++.h>
using namespace std;

int getBinary(int decimal){

    int binary = 0;
    int base = 1;

    while(decimal!=0){
        int rem = decimal%2;
        binary += rem*base;
        decimal/=2;
        base *= 10;
    }

    return binary;
   
}

int main(){

    int n;
    cin>>n;

    int ans = getBinary(n);
    cout<<ans;

}