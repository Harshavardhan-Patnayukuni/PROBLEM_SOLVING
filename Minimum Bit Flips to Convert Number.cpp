class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n=start;
        int m=goal;
        int count=0;
        while(n!=0 and m!=0){
            int r1,r2;
            r1=n%2;
            r2=m%2;
            n=n/2;
            m=m/2;
            if(r1!=r2) count++;
        }
        while(n!=0){
          if(n%2!=0)  count++;
            n=n/2;
        }
        while(m!=0){
          if(m%2!=0)  count++;
            m=m/2;
        }
        return count;
    }
};