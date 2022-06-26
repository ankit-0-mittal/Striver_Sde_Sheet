int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int j=-1;
    int count=0;
    int ans=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        while(count>k){
            j++;
            if(arr[j]==0){
                count--;
            }
        }
        int len=i-j;
        if(len>ans){
            ans=len;
        }
    }
    return ans;
}
