#include<bits/stdc++.h>
using namespace std;

vector<string>getWords(string s){
    string large = "";
    string small = "";

    int lengthLarge = 0;
    int lengthSmall = 1e9;

    int i = 0;
    int n = s.size();

    while(i<n){
        //STEP 1:  we ge the word from the sentence based on the " "(space).
        //Everytime we encounter a space, it means we have just ended a word and we dont have to include the space in a word

        string word = "";

        while(i<n  && s[i]==' '){
            //Everytime we encounter a space, we dont include it and just proceed
            i++;
        }

        while(i<n && s[i]!= ' '){
            //If it is not a space, we include the word
            word+=s[i];
            i++; 
        }


        //STEP 2: We compare the length of the extracted word to get the smallest and the largest word.
        
        if(word.size()>0){
            if(word.size()<lengthSmall){
                small = word;
                lengthSmall = word.size();
            }

            if(word.size()>=lengthLarge){
                large = word;
                lengthLarge = word.size();
            }
        }
    }


    return {small, large};
}

int main(){
    string s;
    getline(cin, s);

    vector<string>ans = getWords(s);
    
    for(int i = 0; i<ans.size(); i++){
        cout<< ans[i] <<" ";
    }

}