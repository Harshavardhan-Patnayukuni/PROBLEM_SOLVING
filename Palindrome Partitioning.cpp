class Solution {
public:
    vector<vector<string>> partition(string s) {
      vector<vector<string>> res;
        vector<string> temp;
        solve(0,s,temp,res);
        return res;
    }
    void solve(int index,string s,vector<string> &temp,vector<vector<string>> &res){
        if(index==s.size()){
            res.push_back(temp);
            return;
        }
        for(int i = index;i<s.size();i++){
             if(isPalindrome(s,index,i)==true)
            {
                temp.push_back(s.substr(index,i-index+1));
                solve(i+1,s,temp,res);
                temp.pop_back();
            }
        }
        return;

    }
    
    bool isPalindrome(string s,int index,int end){
        while(index<=end){
            if(s[index]!=s[end]){
                return false;
            }
            index++;
            end--;
        }
        return true;
    }
};