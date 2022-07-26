class Solution {
public:
    // TC O(log(n)) 
    int mySqrt(int x) {
    int front=0;
    int back=x;
        if(x==0){return 0;}
        if(x==1 )return 1;
    while(1){
        long long int mid =(front+back)/2;
        if(mid>x/mid){ back=mid-1;}
        else { if((mid+1)>x/(mid+1)){
                return mid;}
            front=mid+1; }}
         return 0;}
};
