#include<bits/stdc++.h>
using namespace std;

string removeChar(string s1, string s2){

    map<char, int>mp;

    string res = "";

    for(char ch : s2){
        mp[ch]++;
    }

    for(char ch : s1){
        if(mp[ch] == 0){
            res+=ch;
        }
    }

    return res;
}

int main(){

    string s1;
    cout<<"Enter the first string: ";
    getline(cin, s1);

    string s2;
    cout<<"Enter the second string: ";
    getline(cin, s2);


    string ans = removeChar(s1, s2);

    cout<<ans;

}