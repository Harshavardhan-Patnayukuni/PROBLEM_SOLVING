class Solution {
public:
    /* fact is that 2 to 6 numbers are not happy
      and in all unhappy cases it is becoming 4 at last
    */
    bool isHappy(int n) {
        long t=0,r;
        while(1){
            if(n==1) return true;
            if(n==4) return false;
            while(n!=0)
            {   r=n%10;
                t=t+(r*r);
                n=n/10;
            }
            n=t;
            t=0;
        }
    return true;}
};