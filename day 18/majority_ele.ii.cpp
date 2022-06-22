#include<bits/stdc++.h>
vector<int> majorityElementII(vector<int> &arr)
{
long long cnt1=0,cnt2=0,a=0,b=1;
   for(auto it:arr)
   {
       if(it==a)
           cnt1++;
       else if(it==b)
           cnt2++;
       else if(cnt1==0)
       {
           a=it;
           cnt1=1;
       }
       else if(cnt2==0)
       {
           b=it;
           cnt2=1;
       }
       else
       {
           cnt1--;
           cnt2--;
       }
   }
   cnt1=0,cnt2=0;
   for(auto it:arr)
   {
       if(it==a)
           cnt1++;
       if(it==b)
           cnt2++;
   }
   vector<int>ans;
   if(cnt1>floor(arr.size()/3))ans.push_back(a);
   if(cnt2>floor(arr.size()/3))ans.push_back(b);
   return ans;
}
