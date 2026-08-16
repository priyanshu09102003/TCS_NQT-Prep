#include<bits/stdc++.h>
using namespace std;

int firstNonRepeatingElement(vector<int>& arr){
    unordered_map<int,int>mp;

    for(int num : arr){
        mp[num]++;
    }

    for(int i = 0; i<arr.size(); i++){
        if(mp[arr[i]] == 1){
            return arr[i];
        }
    }

    return 0;


}

int main(){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int ans = firstNonRepeatingElement(arr);
    cout<<ans;

}