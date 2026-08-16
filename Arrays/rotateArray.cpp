#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& a, int k){
    int n = a.size();

    k = k%n;

    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin()+k);
    reverse(a.begin()+k, a.end());

}

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    rotateArray(arr, k);

    for(int num : arr){
        cout<<num<<" ";
    }

}