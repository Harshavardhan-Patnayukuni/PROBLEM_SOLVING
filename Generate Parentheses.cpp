class Solution {
public:
    vector<string> ans;
    void fun(int open,int close,int n,string str){
        if(str.length()==2*n){
            ans.push_back(str);
            return;
        }
        if(open<n) fun(open+1,close,n,str+"(");
        if(close<open) fun(open,close+1,n,str+")");
    }
    vector<string> generateParenthesis(int n) {
       string str;
     fun(0,0,n,str);
        return ans;
    }
};
