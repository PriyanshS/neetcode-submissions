class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='{'||c=='('||c=='['){
                st.push(c);
            }else{
                if(c==')'){
                    if(st.empty()){
                        return false;
                    }
                    else if(st.top()=='('){
                        st.pop();
                    }else{
                        return false;
                    }
                }else if(c=='}'){
                    if(st.empty()){
                        return false;
                    }
                    else if(st.top()=='{'){
                        st.pop();
                    }else{
                        return false;
                    }
                }else if(c==']'){
                    if(st.empty()){
                        return false;
                    }
                    else if(st.top()=='['){
                        st.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
