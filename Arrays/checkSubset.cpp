#include<bits/stdc++.h>
using namespace std;
bool checkSubset(vector<int>& a, vector<int>& b){
    unordered_map<int, int>freq;

    for(int it : a){
        freq[it]++;
    }

    for(int num : b){
        if(freq[num]>0){
            freq[num]--;
        }

        else{
            return false;
        }
    }

    return true;


}

int main(){

    int n, m;
    cin>>n>>m;

    vector<int>a(n);
    vector<int>b(m);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int i = 0; i<m; i++){
        cin>>b[i];
    }

    bool ans = checkSubset(a, b);

    if(ans == 0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }

}