#include<bits/stdc++.h>
using namespace std;

void getBinary(int n , vector<int>& binary){
    while(n){
        binary.push_back(n%2);
        n/=2;
    }
}

int main(){

    int n;
    cin>>n;

    vector<int>binary;
    getBinary(n, binary);

    int len = binary.size();

    //Print the vector in reverse order
    for(int i = len-1; i>=0; i-- ){
        cout<<binary[i];
    }

}