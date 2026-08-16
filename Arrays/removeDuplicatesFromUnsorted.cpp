#include<bits/stdc++.h>
using namespace std;

vector<int> getUnique(vector<int>& arr){
    unordered_map<int, bool> seen;
    vector<int> unique;

    for(int num : arr){
        if(!seen[num]){
            unique.push_back(num);
            seen[num] = true;
        }
    }

    return unique;


}

int main(){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    vector<int>result = getUnique(arr);
    for(int num : result){
        cout<<num<<" ";
    }

    

}