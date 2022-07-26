class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> result;
        unordered_map<string,vector<string>> m;
        // map all anagrams to its coresponding sorted string
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            m[s].push_back(strs[i]);
        }
        // pushing vectors 
        unordered_map<string,vector<string>> ::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            result.push_back(it->second);
        }
        return result; 
    }
};
