#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string s){
    int low = 0;
    int high = s.size()-1;

    while(low<=high){
        if(s[low] != s[high]){
            return false;
        }

        low++;
        high--;
    }

    return true;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    bool ans = palindromeCheck(s);

    cout<<ans<<'\n';
}