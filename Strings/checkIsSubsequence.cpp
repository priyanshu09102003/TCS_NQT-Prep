#include<bits/stdc++.h>
using namespace std;

bool check(string s1, string s2){
    int point1 = 0;
    int point2 = 0;

    int n = s1.size();
    int m = s2.size();

    while(point1<n && point2<m){
        if(s1[point1] == s2[point2]){
            point1++;
        }

        point2++;
    }

    return point1 == n;
}

int main(){

    string s1 , s2;
    getline(cin, s1);
    getline(cin, s2);

    bool ans = check(s1, s2);


    cout<<ans;

}