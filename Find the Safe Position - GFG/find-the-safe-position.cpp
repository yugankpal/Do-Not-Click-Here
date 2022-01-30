// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:

       void solve(int k,int index, int &ans, vector<int>&v){
        if(v.size()==1){
            ans = v[0];
            return;
        }
        
        index = ((index + k) %v.size());
        v.erase(v.begin() + index);
        solve(k,index,ans,v);
        return;
    }
    int safePos(int n, int k) {
        // code here
        int index = 0;
        int ans =-1;
        vector<int> v;
        for(int i =1; i<=n; i++){
            v.push_back(i);
        }
        
        solve(k-1,index,ans,v);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends