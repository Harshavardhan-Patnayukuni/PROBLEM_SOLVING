class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0) return 0;
        stack<string> stk;
        string ans;
        for(int i=0;i<s.size();i++){
            string word;
            if(s[i]==' ') continue;
            while(i<s.size() and s[i]!=' '){
                word=word+s[i];
                i++;
            }
            stk.push(word);
        }
        while(stk.size()!=0){
            string in=stk.top();
            stk.pop();
           ans=ans+in;
            if(stk.size()==0) return ans;
           ans =ans+' ';
        }
        return ans;
    }
};