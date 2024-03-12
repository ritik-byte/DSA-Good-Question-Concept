// 53. Maximum Subarray
// question done by kadane alogo
// gujarati community and businessman concept
// jab tak profit  ya zero business admi se calllabrate karo agar loss vala mile to mat kare aur self se age ka suruat karo 
#include<bits/stdc++.h>
using namespace std;



    int maxSubArray(vector<int>& nums) {
        // kandane alog
        int sum=nums[0];
        int mx=nums[0];
        for(int i=1;i<nums.size();i++){
            if(sum>=0){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
            }
            mx=max(mx,sum);
        }
        return mx;
        
    }
    int main(){
        vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
        cout<<maxSubArray(nums);
        return 0;

    }