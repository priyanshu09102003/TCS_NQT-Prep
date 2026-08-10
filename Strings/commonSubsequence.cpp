#include<bits/stdc++.h>
using namespace std;

bool isCommon(string s1, string s2){
    unordered_set<char> seen(s1.begin(), s1.end());

    for(char ch : s2){
        if(seen.find(ch) != seen.end()){
            return true;
        }
    }

    return true;
}

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    bool ans = isCommon(s1, s2);

    if(ans == 0){
        cout << "False";
    }

    else{
        cout<<"True";
    }

}