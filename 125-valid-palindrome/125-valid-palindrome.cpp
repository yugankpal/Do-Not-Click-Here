class Solution {
private:
    bool valid(char ch){
    if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9'))
        return 1;
    else
        return 0;
}
    char tolowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return ch;
      
    }
    else{
        return ch-'A'+'a';
    }
}
    bool checkpalindrome(string s){
     int st=0;
    int e=s.length()-1;
    while(st<e){
        if(s[st] != s[e]){
            return 0;
        }
        else{
            st++;
            e--;
        }
    } return 1;
}
public:
    bool isPalindrome(string s) {
        string temp;
    for(int j=0; j<s.size(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
    for( int j=0; j<temp.size(); j++){
        temp[j] = tolowercase(temp[j]);
    }
        return checkpalindrome(temp);
    }
};