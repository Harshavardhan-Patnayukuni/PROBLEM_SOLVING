class Solution {
public:
    string fractionToDecimal(int num, int den) {
        string str="";
        if(num==0) return "0";
        if(num>0 ^ den>0 ) str=str+'-';
        long r;
        long n=labs(num);
        long d=labs(den);
        str=str+to_string(n/d);
        r=n%d;
        if(r==0) return str;
        str=str+'.';
        unordered_map<int,int> mpp;
        while(r!=0){
            if(mpp.find(r)!=mpp.end()){
                str.insert(mpp[r],"(");
                str=str+")";
                break;
            }
            mpp[r]=str.size();
            r=r*10;
            str=str+to_string(r/d);
            r=r%d;
        }
        return str;
    }
};