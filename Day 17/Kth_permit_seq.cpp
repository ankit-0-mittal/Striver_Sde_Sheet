#include<bits/stdc++.h>
string kthPermutation(int n, int k) {
   // Write your code here.
   if(n==1 && k==1) return to_string(n);
   int fact =1;
   vector<int>ds;
   for(int i = 1;i<n;i++){
       fact = fact * i;
       ds.push_back(i);
   }
   ds.push_back(n);
   k = k-1;
   string ans = "";
   while(true){
       ans = ans + to_string(ds[k/fact]);
       ds.erase(ds.begin()+(k/fact));
       if(ds.size()==0) break;
       k = k%fact;
       fact = fact/ds.size();
   }
   
   
   return ans;
   
}
