vector<int> stringMatch(string &str, string &pat) {
    // Write your code here
    vector<int>ans;
    int i = 0;
    int m = pat.size();
    int n = str.size();
    while((i+m-1)<n)
    {
        string sub = str.substr(i,m);
        if(sub == pat)ans.push_back(i);
        i++;
    }
    return ans;
}
