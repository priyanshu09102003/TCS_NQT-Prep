#include<bits/stdc++.h>
using namespace std;

int reverseDigits(int n){

    vector<int> digits;

    while(n>0){
        digits.push_back(n%10);
        n/=10;
    }

    reverse(digits.begin(), digits.end());

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
    cin>>n;

    int ans = reverseDigits(n);
    cout<<ans;

}