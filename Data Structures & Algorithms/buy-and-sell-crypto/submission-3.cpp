class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int maxp=0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit=prices[r]-prices[l];
                if(profit>maxp){
                    maxp=profit;
                }
                r++;
            }else{
                l=r;
                r++;
            }
        }
        return maxp;
    }
};
