#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)

{

int an[n+1]={0};

   for(auto a:arr){

       an[a]++;

   }

   pair<int,int> p;

   for(int i=1;i<n+1;i++){

       if(an[i]==0){

           p.first = i;

       }

       if(an[i]>1){

           p.second = i;

       }

   }

return p;

}
