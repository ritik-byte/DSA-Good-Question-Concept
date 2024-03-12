// 121. Best Time to Buy and Sell Stock
// in this question two pointer approch used by solving
// take two point i and j 
#include<bits/stdc++.h>
using namespace std;



    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
        int mx=0;
        while(j<prices.size()){
            // move j jab taak j ka value bara h aur maximun nikalo
            
            if(prices[i]<prices[j]){
                mx=max(mx,(prices[j]-prices[i]));
            }
            else{
                // jab chhota ya barabar ho jay to i lko ja kar do
                // isse ab j ke age ka dekhega aur max nikalega
                i=j;
            }
            j++;
        }
        return mx;    
    }
    int main(){
        vector<int> prices {7,1,5,3,6,4};
        cout<<maxProfit( prices);
        return 0;

    }