#include<bits/stdc++.h>
using namespace std;

vector<int>findDuplicates(vector<int>& arr){
    unordered_map<int, int>freq;

    for(int num : arr){
        freq[num]++;
    }

    vector<int> duplicates;
    for(auto& [num, count] : freq){
        if(count>1){
            duplicates.push_back(num);
        }
    }

    return duplicates;
}

int main(){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    vector<int> duplicateElements = findDuplicates(arr);

    for(int i = 0; i<duplicateElements.size(); i++){
        cout<<duplicateElements[i]<<" ";
    }


}