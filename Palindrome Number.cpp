class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
     long int i,sum=0,r;
        int temp=x;
        for(i=0;temp!=0;i++){
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        if(x==sum){return true;}
        else{return false;}
    }
};
