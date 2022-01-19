class Solution {
public:
    string toLowerCase(string s) {
      
      string str;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                str.push_back(s[i]+32);
            }
            else {
                str.push_back(s[i]);
            }
        }
        return str;
    }
        
      
   
};