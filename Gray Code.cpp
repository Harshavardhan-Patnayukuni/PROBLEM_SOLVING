class Solution {
public:
    vector<int> grayCode(int n) {
        int i=0;
        vector<int> vec;
        long long int p=pow(2,n);
        for(int i=0;i<p;i++){
            vec.push_back(i^(i/2));
        }
    return vec;}
};