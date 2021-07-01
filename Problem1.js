// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).

 

// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.

var findMedianSortedArrays = function(nums1, nums2) {
    finalArr=nums1.concat(nums2);
    finalArr.sort(function(a, b){return a - b}); //compare function to sort numerical values
    length= finalArr.length;
    if (length%2===0){
        var median= (finalArr[(length/2)-1]+finalArr[(length/2)])/2; //for even no. of elems
        }
    else{
        var median= finalArr[((length+1)/2)-1];//for odd no. of elems
    }
    
    return median
    
};