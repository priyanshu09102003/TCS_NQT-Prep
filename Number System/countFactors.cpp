#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;
    vector<int> factors;
    for(int i = 1; i<=n; i++){

        if(n%i == 0){
            count++;
            factors.push_back(i);

        }

    }

    cout<<"The number "<<n<<" has "<<count<<" factors."<<'\n';
    cout<<"The factors are: "<<'\n';
    for(int i = 0; i<factors.size(); i++){
        cout<<factors[i]<<" ";
    }

}