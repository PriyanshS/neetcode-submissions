class Solution {
public:
    bool isPalindrome(string s) {
        string newstr="";
        for(char c:s){
            if(isalnum(c)){
                newstr+=tolower(c);
            }
        }
        return equal(newstr.begin(),newstr.begin()+newstr.size()/2,newstr.rbegin());
    }
};
