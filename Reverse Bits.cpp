class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=0;i<32;i++){
            int r=n%2;
            n=n/2;
            res=res*2+r;
        }
        return res;
    }
};