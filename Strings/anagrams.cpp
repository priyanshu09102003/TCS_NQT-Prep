#include<bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2){
    map<char, int>mp1;
    map<char, int>mp2;
    
    for(char ch : s1){
        mp1[ch]++;
    }

    for(char ch : s2){
        mp2[ch]++;
    }


    return mp1 == mp2; 
}

int main(){

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    bool ans = checkAnagram(s1, s2);

    cout<<ans<<'\n';

}