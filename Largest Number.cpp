    bool compare(string a,string b){
        return a+b>b+a;
    }

class Solution {
public:

    string largestNumber(vector<int>& nums) {
        vector<string> container;
        for(int i=0;i<nums.size();i++){
            container.push_back(to_string(nums[i]));
        }
        sort(container.begin(),container.end(),compare);
        string result;
        for(int i=0;i<container.size();i++){
            result=result+container[i];
        }
        if(result[0]=='0') return"0";
        return result;
        
    }
};