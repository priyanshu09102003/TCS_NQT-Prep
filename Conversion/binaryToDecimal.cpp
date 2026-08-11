#include<bits/stdc++.h>
using namespace std;

int getDecimal(int n){
    string num = to_string(n);

    int base = 1;
    int ans = 0;
    int len = num.size();   

    for(int i = len-1; i>=0; i--){
        if(num[i] == '1'){  
            ans+=base;
        }
        base*=2;
    }

    return ans;
}

int main(){

    int n;
    cin>>n;

    int ans = getDecimal(n);
    cout<<ans;

}