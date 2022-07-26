class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totaldif=0;
        int currdif=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            totaldif=totaldif+gas[i]-cost[i];
            currdif=currdif+gas[i]-cost[i];
            if(currdif<0){
                currdif=0;
                start=i+1;
            }
        }
        if(totaldif<0) return -1;
        return start;
    }
};