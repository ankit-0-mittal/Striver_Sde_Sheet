#include<bits/stdc++.h>
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k)
{

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> min_heap; // (element, vector no, index of that vector)
    
    
    for(int i=0; i<k; i++)
    {
        int first_elem = arr[i][0];
        min_heap.push(make_pair(first_elem, make_pair(i, 0)));
    }
    
    vector<int> res;
    while(!min_heap.empty())
    {
        int elem = min_heap.top().first;
        int vect_no = min_heap.top().second.first;
        int vect_index = min_heap.top().second.second;
        
        min_heap.pop();
        res.push_back(elem);
        
   
        if(vect_index+1 < arr[vect_no].size())
        {
            min_heap.push(make_pair(arr[vect_no][vect_index+1], make_pair(vect_no, vect_index+1)));
        }
    }
    
    return res;
}
