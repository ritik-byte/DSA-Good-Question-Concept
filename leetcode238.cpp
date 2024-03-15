// 238. Product of Array Except Self
// Approch: iss qus me ham do map bana ke left se multiple with index store karenge vaise hi right se then match kara ke kaam kr lenge

#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a;
        // int i=0;
        // while(i<nums.size()){
        //      int  ml=1;
        //      int  mr=1;
        //     if(i==0){
        //         ml=1;
        //     }
        //     else{
        //         for(int j=i-1;j>=0;j--){
        //         ml=ml*nums[j];
        //         }
        //     }
        //     if(i==nums.size()-1){
        //         mr=1;
        //     }
        //     else{
        //        for(int j=i+1;j<nums.size();j++){
        //         mr = mr*nums[j];
        //        }
        //     }
        //     a.push_back(ml*mr);
        //     i++;
        // }
        // return a;
        int ss=nums.size();  
        int ans=1;  
    
        unordered_map<int,int>ml;
        unordered_map<int,int>mr;
        for(int i=0;i<ss;i++){
            ans=ans*nums[i];
            ml[i]=ans;
        }
        int ans2=1;
        for(int i=ss-1;i>=0;i--){
            ans2=ans2*nums[i];
            mr[i]=ans2;
        }
        for(int i=0;i<=ss-1;i++){
            if(i==0){
                a.push_back(mr[i+1]);
            }
            else if(i==ss-1){
                a.push_back(ml[i-1]);
            }
            else{
                a.push_back(ml[i-1]*mr[i+1]);
            }
        }
        return a;
    }

int main(){
    vector<int> nums{1,2,3,4};
    productExceptSelf(nums);

    return 0;
}