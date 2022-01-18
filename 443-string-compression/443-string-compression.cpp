class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int arrayIndex =0;
        int n = chars.size();
        while(i<n){
            int j= i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //yahan kb aaoge
            // ya to poora traverse kr lia 
            //ya fir nya ya different character milgya 
            
            //old character store krle
            chars[arrayIndex++] = chars[i];
            int count = j-i;
            if(count >1){
              //  converting count into single digit string
                string cnt = to_string(count);
                for (char ch: cnt){
                    chars[arrayIndex++] = ch;
                }
                
            } 
            i=j;
        }
        return arrayIndex;
    }
};