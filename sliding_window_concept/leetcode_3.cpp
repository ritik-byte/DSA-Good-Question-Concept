//  3. Longest Substring Without Repeating Characters
// link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        int n=s.size();
        int ans=0;
        // using unordered_map and sliding widow concept
        // check frequecy of charater in string
        // and check the condition and decrease from left
        unordered_map<char,int> cc;
        for( ;right<n;right++){
            cc[s[right]]++;
            for( ;cc[s[right]]>1;left++){
                cc[s[left]]--;
            }
            ans=max(ans,right-left+1);
           
        }
        return ans;
    }
};
