class Solution {
public:
    bool isPalindrome(int x) {
        
       int temp = x;
        long long sum = 0;
        
            while(x>0){
                int ans = x%10;
                sum = (sum*10)+ans;
                  x= x/10;
            }
             if(sum == temp)
                  return true;
           
              else
                 return false;
    }
};