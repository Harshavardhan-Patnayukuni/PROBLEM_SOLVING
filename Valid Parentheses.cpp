class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]=='['||s[i]=='{'||s[i]=='('){
                stack.push(s[i]);
            }
            else{
                if(stack.empty() ||(stack.top()=='(' && s[i]!=')') ||(stack.top()=='{' && s[i]!='}') || (stack.top()=='[' && s[i]!=']')) return false;
                stack.pop();
            }
        }  
    
    return stack.empty();}
                    
};


