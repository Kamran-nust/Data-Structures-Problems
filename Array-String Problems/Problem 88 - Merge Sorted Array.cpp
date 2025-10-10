// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
//The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

//Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
//Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
//The remaining elements of nums are not important as well as the size of nums.
// Return k.


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int endone = m;
        int endtwo = n;
        int end= m+n;

        while(end>0)
        {
            if (endone==0)
            {
                nums1[end-1]=nums2[endtwo-1];
                end--;
                endtwo--;
            }
            else if (endtwo==0)
            {
                nums1[end-1]=nums1[endone-1];
                end--;
                endone--;
            }
            else if (nums1[endone-1]>=nums2[endtwo-1])
            {
                nums1[end-1]=nums1[endone-1];
                end--;
                endone--;
            }
            else
            {
                nums1[end-1]=nums2[endtwo-1];
                end--;
                endtwo--;
            }
        } 
             
        }
};
