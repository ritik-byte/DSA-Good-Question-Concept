// 1493. Longest Subarray of 1's After Deleting One Element
// sliding window technique and concept 
// templete for sliding window concept



class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,ans=0;
        int n=nums.size();
        int count_0=0;
        for( ;r<n;r++){
            if(nums[r]==0){
                count_0++;
            }
            // valid subarray check arennge
            // valid subarray ka condition ye h ki subarray me maximun 1 hi zero ho 
            // 1 se jyada zero mila to invalid ho jayega aur ham zero ko kam karna suru karenge ,,,piche se nikalte jao
            // jab valid n ban jay.....
            for( ;count_0>1;l++){
                if(nums[l]==0){
                    count_0--;
                }
            }
            ans=max(ans,r-l+1);
        }
        return ans-1;
        
    }
};