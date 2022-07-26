class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;int sign=1;
        long long int sum=0;
        while(i<n and s[i]==' ') i++;
        if(s[i]=='-') {sign=-1; i++;}
        else if(s[i]=='+'){ sign=1;i++;}
        while(i<n){
            if(s[i]-'0'>9||s[i]-'0'<0) break; // this you need to take care
            sum=sum*10+(s[i]-'0');
            if(sum>=INT_MAX) break;
             i++;
        }
        sum=sum*sign;
        if(sum<=INT_MIN) return INT_MIN;
         if(sum>=INT_MAX) return INT_MAX;
        return sum;
                
        
    }
};
