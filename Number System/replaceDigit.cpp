#include<bits/stdc++.h>
using namespace std;

int replaceDigits(int n){
    if(n==0)return 5;

    vector<int> digits;

    while(n>0){
        digits.push_back(n%10);
        n/=10;
    }

    for(int i = 0; i<digits.size(); i++){
        if(digits[i] == 0){
            digits[i] = 5;
        }
    }

    int result = 0;
    int placeValue = 1;

    for(int i = 0; i<digits.size(); i++){
        result = result+digits[i]*placeValue;
        placeValue*=10;
    }

    return result;
}

int main(){
    int n;
    cout<<"Enter the number: ";

    cin>>n;

    cout<<replaceDigits(n);
}