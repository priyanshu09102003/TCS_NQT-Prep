#include<bits/stdc++.h>
using namespace std;

string encryptedString(string s){
    
    int i = 0;
    string encrypt = "";
    int n = s.size();


    while(i<n){
        int count = 0;
        char ch = s[i];

        while(i<n && ch == s[i]){
            i++;
            count++;
        }

        encrypt+=ch;
        encrypt+=to_string(count);

    }

    reverse(encrypt.begin(), encrypt.end());

    return encrypt;


}

int main(){

    string s;
    getline(cin, s);

    string ans = encryptedString(s);
    cout<<ans;

}