class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> result;
        int i=0,j=0;
        int s,f;
        double x;
        s=nums1.size()+nums2.size();
        f=s/2;
        
        while(i<nums1.size()||j<nums2.size()){
            
         if(i==nums1.size()){
               result.push_back(nums2[j]);
                j++;
            }
            else if(j==nums2.size()){
                result.push_back(nums1[i]);
                    i++;
            }
           else if(nums1[i]<nums2[j]){
                result.push_back(nums1[i]);
                    i++;
            }
            else if(nums1[i]>nums2[j]){
                result.push_back(nums2[j]);
                j++;
            }
           else  if (nums1[i]==nums2[j]){
                result.push_back(nums2[j]);
                j++;
                result.push_back(nums1[i]);
                    i++;

            }
        }
        if(s%2==0){
            x=result[f]+result[f-1];
            x=x/2;
        }
        else{
            x=result[f];
        }
       return x;

    } 
        
    };
