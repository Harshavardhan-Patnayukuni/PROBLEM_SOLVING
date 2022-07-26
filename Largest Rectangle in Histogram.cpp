class Solution {
public:
    vector<int> previoussmall(vector<int> &heights){
         vector<int> ps(heights.size());
         stack<int> s;
        for(int i=0;i<heights.size();i++){
            while(s.size()!=0&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.size()==0) ps[i]=-1;
            else{
                ps[i]=s.top();
            }
            s.push(i);
        }
        
        
        return ps;
    }
        vector<int> nextsmall(vector<int> &heights){
         vector<int> ps(heights.size());
         stack<int> s;
        for(int i=heights.size()-1;i>=0;i--){
            while(s.size()!=0&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.size()==0) ps[i]=heights.size();
            else{
                ps[i]=s.top();
            }
            s.push(i);
        }
        
        
        return ps;
    }
    int largestRectangleArea(vector<int>& heights) {
        int maxi=0;
        vector<int> ps;
        vector<int> ns;
        ps=previoussmall(heights);
        ns=nextsmall(heights);
        for(int i=0;i<heights.size();i++){
            int area;
            area=heights[i]*(ns[i]-ps[i]-1);
            maxi=max(maxi,area);
        }
        return maxi;
    }
};