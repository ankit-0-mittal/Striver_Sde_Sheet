#include<algorithm>

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<pair<double, int> >v;
    for(int i=0; i<n; i++){
        double ratio = (items[i].second *1.0)/(items[i].first*1.0);
        v.push_back({ratio, i});
    }
    sort(v.begin(), v.end(), greater<pair<double, int> >());
    int wt = 0;
    double ans = 0;
    for(int i=0; i<n; i++){
        if(wt + items[v[i].second].first < w){
            ans += items[v[i].second].second;
            wt += items[v[i].second].first;
        }
        else{
            double remainWt = (w - wt)*1.0;
            ans += (remainWt * v[i].first);
            break;
        }
    }
    return ans;
}
