#include<bits/stdc++.h>
void helper(int index, vector<int>&arr, vector<vector<int>>&ans,vector<int>&curr)
{
	ans.push_back(curr);   // include curr in our ans
	for(int i=index;i<arr.size();i++)
	{
		if(i>index && arr[i]==arr[i-1])    // if duplicates then ignore
		{
			continue;
		}
		curr.push_back(arr[i]);         // include arr[i] in curr
		helper(i+1,arr,ans,curr);
		curr.pop_back();             // pop arr[i] for next subset call
	}
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
	vector<vector<int>>ans;        // to store all subsets
	vector<int>curr;          // to store current individual subset
	sort(arr.begin(),arr.end());      // sort to make duplicates adjacent
	helper(0,arr,ans,curr);
	
	return ans;
}
