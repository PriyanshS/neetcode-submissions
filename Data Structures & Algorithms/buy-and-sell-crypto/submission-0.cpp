class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int n=prices[i]-min;
            
            if(n>profit){
                profit=n;
               
            }
            if(prices[i]<min){
                    min=prices[i];
            }
        }
        return profit;
        
    }
};
