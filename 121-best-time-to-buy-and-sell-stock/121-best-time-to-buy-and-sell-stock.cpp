class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=prices[0], s, maxP = 0;
        
        for(int i = 1; i < prices.size(); i++){
            s = prices[i];
            
            if(b > prices[i])
                b = prices[i];
            else
                maxP = max(s - b, maxP);
        }
        
        return maxP;
    }
};