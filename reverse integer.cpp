class Solution {
public:
    int reverse(int n) {        
        int sum=0,r;
        while(n!=0){
            r=n%10;
            n=n/10;
    if(sum<-pow(2,31)/10||sum>(pow(2,31)-1)/10) return 0;
            sum=sum*10 +r;
        }
        if(sum<-pow(2,31)||sum>(pow(2,31)-1)){return 0;}
        return sum;
        
    }
};
