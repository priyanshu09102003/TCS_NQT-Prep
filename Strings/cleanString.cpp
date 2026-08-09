#include<bits/stdc++.h>
using namespace std;

string cleanedString(string s){

    string clean = "";

    for(char ch : s){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            clean+=ch;
        }
    }

    return clean;
}

int main(){

    string s;
    cout<<"Enter the string: ";
    getline(cin, s);

    string ans = cleanedString(s);

    cout<<ans;

}