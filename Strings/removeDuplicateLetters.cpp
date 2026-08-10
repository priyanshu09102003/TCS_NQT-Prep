#include<bits/stdc++.h>
using namespace std;

string duplicates(string s){
    unordered_set<char>seen;
    string result = "";

    for(char ch : s){
        if(seen.find(ch) == seen.end()){
            result+=ch;
            seen.insert(ch);
        }
    }

    return result;
}

int main(){

    string s;
    getline(cin, s);
    string ans = duplicates(s);

    cout<<ans;

}