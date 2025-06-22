class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0,tmp=0;
        for(int i=prices.size()-1;i>=0;i--){
            tmp=max(tmp,prices[i]);
            if(prices[i]<tmp){
                sum+=tmp-prices[i];
                tmp=prices[i];
            }
        }
        return sum;
    }
};
