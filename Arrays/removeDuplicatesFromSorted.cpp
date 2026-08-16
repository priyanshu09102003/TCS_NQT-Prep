#include<bits/stdc++.h>
using namespace std;

vector<int>removeDuplicates(vector<int>& arr){
    vector<int>result;
    int n = arr.size();
    if(n==0)return result;

    result.push_back(arr[0]);

    for(int i = 1; i<arr.size(); i++){
        if(arr[i] != arr[i-1]){
            result.push_back(arr[i]);
        }
    }

    return result;
}



int main(){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans = removeDuplicates(arr);

    for(int num : ans){
        cout<<num<<" ";
    }

}