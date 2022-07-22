#include<bits/stdc++.h>
static bool comp(vector<int> a,vector<int> b)
{
   return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
   int n=jobs.size();
  sort(jobs.begin(),jobs.end(),comp);
  int mx=jobs[0][0];
   for(int i=1;i<n;i++)
       mx=max(mx,jobs[i][0]);
   int profit=0;
   vector<int> v(mx+1,-1);
   
   for(int i=0;i<n;i++)
       for(int j=jobs[i][0];j>0;j--)
           if(v[j]==-1)
           {
               v[j]=i;
               profit += jobs[i][1];
               break;
           }
   return profit;
}
