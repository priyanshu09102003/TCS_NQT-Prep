#include<bits/stdc++.h>
using namespace std;

//Function to merge the sorted arrays
void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    //Remaining elements
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //Transferring the order to the orginal array

    for(int i = low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}


//Function to divide the arrays
void mergeSort(vector<int>& arr, int low, int high){
    if(low>=high)return;

    //Dividing step
    int mid = (low + high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
    
    

}

int main(){
    int n;
    
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }



}