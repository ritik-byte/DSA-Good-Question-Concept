// Remove all duplicates from a given string
// Given a string str which may contain lowercase and uppercase characters. The task is to remove all duplicate characters from the string and find the resultant string. The order of remaining characters in the output should be same as in the original string.
#include<iostream>

using namespace std;
string removeDuplicates(string str) {
	    
	    string ss="";
	    for(int i=0;i<str.size();i++){
            // str.find() se postion milata h agar present nahi h to string :: npos return karega 
            // isse ham pata kar lenge char pahle se presnt h ya nahi agar h to mat push kare varana push kar do
	        if(ss.find(str[i])==string :: npos){
	            ss.push_back(str[i]);
	        }
	    }
	    return ss;
	    
}

int main()

{

string str = "geEksforGEeks";
cout<<removeDuplicates( str)<<endl;
return 0;
 

}