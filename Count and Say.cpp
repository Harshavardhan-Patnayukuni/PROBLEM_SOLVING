class Solution {
public:
    string countAndSay(int n) {
        if(n==0) return"";
        string res="1";
        while(--n){
            string curr="";
            for(int i=0;i<res.size();i++){
                int count=1;
                while((i+1)<res.size() and res[i]==res[i+1]){count++;i++;}
                curr=curr+to_string(count)+res[i];
            }
            res=curr;
        }
    return res;}
};