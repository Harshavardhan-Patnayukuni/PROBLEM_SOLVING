class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char,int> mp={{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
        int sum=0,len=s.size(),i;
        sum=mp[s[len-1]];
        for(i=0;i<len-1;i++){
            if(mp[s[i]]<mp[s[i+1]]){sum=sum-(mp[s[i]]);}
            else{
                sum=sum+(mp[s[i]]);
            }
        }
        return sum;
     }
};
