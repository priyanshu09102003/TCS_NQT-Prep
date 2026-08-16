#include<bits/stdc++.h>
using namespace std;

int getMaxProduct(vector<int>& nums){
    int pre = 1;
    int suff = 1;
    int n = nums.size();
    int maxProd = -1e9;

    for(int i = 0; i<n; i++){
        if(pre == 0){
            pre = 1;
        }

        if(suff == 0){
            suff = 1;
        }

        pre*=nums[i];
        suff*=nums[n-i-1];

        maxProd = max(maxProd, max(pre, suff));
    }

    return maxProd;


}

int main(){

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int maximum  = getMaxProduct(arr);
    cout<<maximum;
}