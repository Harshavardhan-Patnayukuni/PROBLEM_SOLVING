class Solution {
public:
    //seive of erathothanus
    int countPrimes(int n) {
        vector<bool>  prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i<=sqrt(n);i++){
            if(prime[i]==true){
                for(int j=i*i;j<=n;j=j+i){
                    prime[j]=false;
                }
            }
        }
        int count=0;
        for(int k=2;k<n;k++){
            if(prime[k]==true) count++;
        }
        return count;
    }
};