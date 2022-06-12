
#include<bits/stdc++.h>

using namespace std;

 

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {

//sort a given vector.

   sort(arr.begin(),arr.end());

 

int mx = 0;     //Overall longest sequence;

int count = 0;   //sequence in each element ;

 

for(int i=0;i<n;i++)

{

 if(i>=0 && arr[i]==arr[i-1]+1) //check the previous is in sequence or not

 {

  count++;

 }

 else if(i>0 && arr[i]==arr[i-1]) //if both are equal just continue;

 {

  continue;

 }

 else        //non is true than bring back count to 0;

 {

  count =1;

 }

 mx = max(mx,count);

 

}

return mx;

 

 

}
