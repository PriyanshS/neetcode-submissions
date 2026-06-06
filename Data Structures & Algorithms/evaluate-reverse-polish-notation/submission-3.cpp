class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int>stack;
        for(const auto& c:tokens){
         if(c=="+"){
                int v1=stack.top();
                stack.pop();
                int v2=stack.top();
                stack.pop();
                int v3=v1+v2;
                stack.push(v3);

            }
            else if(c=="-"){
                int v1=stack.top();
                stack.pop();
                int v2=stack.top();
                stack.pop();
                int v3=v2-v1;
                stack.push(v3);

            }else if(c=="*"){
                int v1=stack.top();
                stack.pop();
                int v2=stack.top();
                stack.pop();
                int v3=v1*v2;
                stack.push(v3);
            }
            else if(c=="/"){
                int v1=stack.top();
                stack.pop();
                int v2=stack.top();
                stack.pop();
                int v3=v2/v1;
                stack.push(v3);
            }else{
                int v=stoi(c);
                stack.push(v);
            }

        }
        return stack.top();
    }
};
