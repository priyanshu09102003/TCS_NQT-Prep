#include<bits/stdc++.h>
using namespace std;

int getOctal(int n){

    string num = to_string(n);
    int len = num.size();

    if(len%3==1){
        num = "00" + num;
    }
    else if(len%3==2){
        num = "0"+num;
    }

    len = num.length();
    string ans = "";

    for(int i = 0; i<len; i+=3){
        int temp = (num[i]-'0')*4 + (num[i+1]-'0')*2 + (num[i+2]-'0')*1;
        ans+=(temp+'0');
    }

    int octal = stoi(ans);
    return octal;

}

int main(){

    int n;
    cin>>n;

    int answer = getOctal(n);
    cout<<answer;

}