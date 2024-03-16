// 1071. Greatest Common Divisor of Strings
// approch: agar string ko plus karne dono taraf se so uska gcd nikal sakate 

#include<bits/stdc++.h>
using namespace std;
string gcdOfStrings(string str1, string str2) {
        string ss="";
        // concept ye (str1+str2)==(str2+str1) h
        if((str1+str2)==(str2+str1)){
           int s1=__gcd(str1.size(),str2.size());//ye hame comman value dega
            for(int i=0;i<s1;i++){
                ss.push_back(str1[i]);
            }
            return ss;
        }
        return ss;
        
    }
int main(){
    string str1="ABCABC";
    string str2="ABC";
    cout<<gcdOfStrings(str1,str2);
   
    return 0;
}