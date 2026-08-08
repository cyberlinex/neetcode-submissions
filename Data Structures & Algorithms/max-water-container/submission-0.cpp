class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int max = 0;
        while(i<j){
            int l = j-i;
            int temp = min(heights[i],heights[j])*l;
            if(max < temp) max = temp;
            if(heights[i]<=heights[j]) i++;
            else if(heights[i]>=heights[j]) j--;
        }
        return max;
        
        
    }
};
