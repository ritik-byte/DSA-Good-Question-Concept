#include<bits/stdc++.h>
using namespace std;
string firstPalindrome(vector<string>& words) {
        string ss="";
        for(int i=0;i<words.size();i++){
            int j=0;
            int k=(words[i].size())-1;
            while(j<k){ 
                if(words[i][j]!=words[i][k]){
                    break;
                }  
                j++;
                k--;
            }
            if(j==words[i].size()/2){
                ss=words[i];
                break;
            }
        }
        return ss;  
    }
int main(){
    vector<string>words{"abc","car","ada","racecar","cool"};
    cout<<firstPalindrome(words);
    return 0;
}