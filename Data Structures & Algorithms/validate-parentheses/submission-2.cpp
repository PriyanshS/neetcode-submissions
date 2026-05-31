class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        if(n%2!=0){
            return false;
        }
        vector<char> stack;
        int top=0;
        for(int i=0;i<n;i++){

            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stack.push_back(s[i]);
                top++;
            }
            else{
                if(top==0){
                    return false;
                }
                if(s[i]==')'){
                    if(stack[top-1]!='('){
                        return false;
                    }
                }
                else if(s[i]=='}'){
                    if(stack[top-1]!='{'){
                        return false;
                    }
                }
                else if(s[i]==']'){
                    if(stack[top-1]!='['){
                        return false;
                    }
                }
                top--;
                stack.pop_back();

            }
        }
        return top==0;

        
    }

};
