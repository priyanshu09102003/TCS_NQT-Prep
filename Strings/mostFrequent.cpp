#include<bits/stdc++.h>
using namespace std;

char findFrequent(string s){
    map<char, int>freq;

    for(char ch : s){
        freq[ch]++;
    }

    char result = s[0];
    int maxi = 0;

    for(auto &p : freq){
        if(p.second>maxi){
            maxi = p.second;
            result = p.first;
        }
    }

    return result;
}

int main(){

    string s;
    getline(cin, s);

    char ans = findFrequent(s);

    cout<<ans;

}