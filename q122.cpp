#include<iostream>
#include<vector>
usinr namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int bestbuy=prices[0];
       int profit = 0;
       int sell;
       for(int i=0;i<prices.size();i++) {
          
            if(i==prices.size()-1){
              sell=prices[i];
              profit=profit+sell-bestbuy;
               return profit;
             }
               if(bestbuy>prices[i]){
                bestbuy=prices[i];
               }
                 int j=prices[i+1];
              if(j<prices[i]){
                sell=prices[i];
                profit += sell-bestbuy;
                bestbuy=j;
              }
       }
       return profit;
    }
};
int main(){
  Solution s;
vector<int>arr=[1,2,3,4,5];
cout<<"profit is "<<s.maxProfit(arr)<<endl;
}
