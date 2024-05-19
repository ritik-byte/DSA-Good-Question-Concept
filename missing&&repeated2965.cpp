class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>arr;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr.push_back(grid[i][j]);
            }
        }
        // 2d ka array 1d array me kar do and then array ko sort kar do...
        vector<int> ans;
        sort(arr.begin(),arr.end());
        // loop chala ke reapeated nikal lo
        for(int i=0;i<row*col-1;i++){
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
                arr[i+1]=0;
                // jo duplicate h usee zero kar do kyonki sum age problem ayega....
                break;
            }
        }
        int sum1=0,sum2=0;
        // vector<int> ref;
        // here concept is all n nuber sum kar do aur purane element ka  sum kar then differnce dekh lo missing element mil jayega.....
        for(int i=1;i<=row*col;i++){
            // ref.push_back(i);
            sum1+=i;
        }
        // int sum1=0,sum2=0;
        for(int i=0;i<row*col;i++){
            // sum1+=ref[i];
            sum2+=arr[i];
           
        }
        ans.push_back(sum1-sum2);
        return ans;
    }
};