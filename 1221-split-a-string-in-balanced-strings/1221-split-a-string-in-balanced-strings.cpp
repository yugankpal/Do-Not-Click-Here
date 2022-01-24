class Solution {
public:
    int balancedStringSplit(string s) {
        int j=0,i=0,cnt=0;
        
        for(int k=0; k<s.length(); k++){
            if(s[k]=='R'){
                i++;
                if(i==j){
                    cnt++;
                }
            }
            else if(s[k]=='L'){
                j++;
                if(i==j){
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};