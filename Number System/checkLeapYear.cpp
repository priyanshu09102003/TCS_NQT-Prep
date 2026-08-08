#include<bits/stdc++.h>
using namespace std;

bool checkLeapYear(int n){

    if(n%4==0){
        if(n%100 == 0){
            return (n%400==0);
        }

        return true;
    }

    return false;
}

int main(){
    int n;
    cin>>n;

    bool ans = checkLeapYear(n);
    cout<<ans;
}