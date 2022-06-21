int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int l = 0;
    for(int i = 0; i < n; i++)
        l ^= arr[i];
    
    return l;
}
