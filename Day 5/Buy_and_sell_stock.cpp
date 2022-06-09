#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){

   int mini = 10E9,profit = 0;

   for(auto it:prices){

     int temp = it - mini;

     if(temp<=0)mini = it;

     profit = max(profit,temp);

   }

   return profit;

}
