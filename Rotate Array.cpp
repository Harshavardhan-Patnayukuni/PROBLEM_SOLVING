class Solution {
public:
    void rotate(vector<int>& num, int k) {
       int n=num.size();
        k=k%n;
        reverse(num.begin(),num.begin()+n-k);
        reverse(num.begin()+n-k,num.begin()+n);
       reverse(num.begin(),num.end());
    }
};