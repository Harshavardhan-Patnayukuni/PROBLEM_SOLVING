class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        int arr[32],i;
        for(i=0;i<32;i++){
            arr[i]=n%2;
            n=n/2;
            res=res*2+arr[i];
        }
        return res;
    }
};
