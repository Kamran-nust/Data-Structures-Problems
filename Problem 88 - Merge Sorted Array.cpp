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
