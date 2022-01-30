class Solution {
public:
    void solve(vector<int> v, int index, int k, int &ans){
        if(v.size()==1){
            ans = v[0];
            return;
        }
        index = (index + k)% v.size();
        v.erase(v.begin()+ index);
        solve(v,index,k,ans);
        return;
    }
    int findTheWinner(int n, int k) {
        int index =0;
        int ans =-1;
        vector<int> v;
        for(int i =1; i<=n; i++){
            v.push_back(i);
        }
        solve(v,index,k-1,ans);
        return ans;
    }
};