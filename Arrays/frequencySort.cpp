#include<bits/stdc++.h>
using namespace std;

vector<int>freqSorting(vector<int>& arr){
    unordered_map<int, int>freq;

    for(int num : arr){
        freq[num]++;
    }

    auto comp = [&](int a, int b){
        if(freq[a] != freq[b]){
            return freq[a]<freq[b];
        }

        return a>b;
    };

    sort(arr.begin(), arr.end(), comp);

    return arr;
}

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    freqSorting(arr);

    for(int num : arr){
        cout<<num<<" ";
    }

}