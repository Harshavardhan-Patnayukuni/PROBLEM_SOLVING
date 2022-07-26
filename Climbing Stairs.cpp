class Solution {
public:
    int climbStairs(int n) {
        // dp 
        // tabulation
        int arr[n+1];
        int i;
        arr[1]=1;
        arr[0]=1;
        for(i=2;i<n+1;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};
/* 
// dp 
// memoiozation

int countways(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else {
        return countways(n-1)+countways(n-2);
    }
    return 0;
}*/


