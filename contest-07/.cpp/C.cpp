# include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int i, j;
    int n, a; 
    vector<int> ans(t, 0);
    vector<int> v;
    
    for(i=0; i<t; i++){
        cin >> n;
        v.clear();
        v.resize(1000, 0);
        
        for(j=0; j<n; j++){
            cin >> a;
            v[a-1]++;
        }
        
        for(j=0; j<1000; j++)
            ans[i] = max(ans[i], v[j]);
            
        ans[i] = n-ans[i];
    }
    
    for(i=0; i<t; i++)
        cout << ans[i] << endl;
    
    return 0;
}