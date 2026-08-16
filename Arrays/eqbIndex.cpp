#include<bits/stdc++.h>
using namespace std;

int equilibriumIndex(vector<int>& arr){
    int sum = 0;

    for(int i = 0; i<arr.size(); i++){
        sum+=arr[i];
    }

    int leftSum = 0;
    int rightSum = sum;

    for(int i = 0 ;i<arr.size(); i++){
        rightSum-=arr[i];

        if(rightSum == leftSum){
            return i;
        }

        leftSum+=arr[i];
    }

    return -1;
}

int main(){

    int n;
    cin>>n; 
    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int index = equilibriumIndex(arr);

    cout<<index;

}