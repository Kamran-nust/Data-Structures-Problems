// You are given an integer array height of length n. 
// There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maximum=0;
        int min_height;
        int i=0;
        int j=height.size()-1;

        while(i<j)
        {
            min_height=min(height[i], height[j]);
            // if (height[i]<=height[j])
            // {
            // min_height=height[i++];
            // }
            // else
            // {
            // min_height=height[j--];
            // }
            height[i]<=height[j]? i++: j--;
            maximum= max(maximum, (min_height*(j-i+1)));
        }
        return maximum;
    }
};
