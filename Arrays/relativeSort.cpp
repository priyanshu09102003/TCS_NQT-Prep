#include<bits/stdc++.h>
using namespace std;

vector<int> relativeSort(vector<int>& a, vector<int>& b){
    map<int, int> freq;

    for(int it : a){
        freq[it]++;
    }

    vector<int> result;

    for(int it : b){
        if(freq.count(it) && freq[it]>0){
            for(int i = 0; i<freq[it]; i++){
                result.push_back(it);
            }
            freq[it] = 0;
        }
    }

    for(auto& [key, count] : freq){
        for(int i = 0; i<count; i++){
            result.push_back(key);
        }
    }

    return a = result;
}

int main(){

}