class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        for(int i=0;i<s.size();i++){
            smap[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            tmap[t[j]]++;
        }
        for(int i=0;i<s.size();i++){
            if(smap[s[i]]!=tmap[s[i]]) return false;
        }
        for(int i=0;i<t.size();i++){
            if(smap[t[i]]!=tmap[t[i]]) return false;
        }
        return true;
    }
};