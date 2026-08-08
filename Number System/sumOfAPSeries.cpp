#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cout<<"Enter number of terms: ";
    cin>>n; 

    int a; 
    cout<<"Enter the first term: ";
    cin>>a;

    int d;
    cout<<"Enter difference: ";
    cin>>d;

    int sum = (n*(2*a + (n-1)*d))/2;

    cout<<sum;
}