// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

 

// Example 1:

// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]

class Solution {
public:
    
    int right(int elm,vector<int>some){
        int ans=-1; 
        for(int i=0;i<some.size();i++){
             if (some[i]==elm){
                 if(i==some.size()-1){
                     ans= -1;
                 }
                 else{
                     for (int j=i+1;j<some.size();j++){
                        if(some[j]>elm){
                            ans= some[j];
                            break;
                        }
                         else{
                             ans= -1;
                         }
                     }
                 }                                     
             }
         }
        return ans;
            
    } 
    
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
           int elem= nums1[i];
           res.push_back(right(elem,nums2)); 
        }
        return res;
    }
};
