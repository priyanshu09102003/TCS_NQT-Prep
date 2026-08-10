#include<bits/stdc++.h>
using namespace std;

bool checkIfIsomorphic(string s1, string s2){
    map<char, int>mp1;
    map<char, int>mp2;

    for(int i = 0; i<s1.size(); i++){
        if(mp1.find(s1[i]) == mp1.end()){
            mp1[s1[i]] = i;
        }

        if(mp2.find(s2[i]) == mp2.end()){
            mp2[s2[i]] = i;
        }

        if(mp1[s1[i]]!=mp2[s2[i]]){
            return false;
        }
    }

    return true;
}

int main(){

    string s1;
    cout<<"Enter the first string: ";
    getline(cin, s1);

    string s2;
    cout<<"Enter the second string: ";
    getline(cin, s2);

    bool ans = checkIfIsomorphic(s1, s2);

    if(ans == 0){
        cout<<"False";
    }

    if(ans == 1){
        cout<<"True";
    }

}