#include<bits/stdc++.h>
using namespace std;

string removeVowels(string s){

    string res = "";
    for(char ch : s){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            continue;
        }

        res+=ch;
    }

    return res;
}

int main(){
    string s;
    getline(cin, s);

    string ans = removeVowels(s);

    cout<<ans;
}