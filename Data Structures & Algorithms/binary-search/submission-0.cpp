class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;
        int m = (i+j)/2;
        while(i<=j){
            m = (i+j)/2;
            if(target<nums[m]) j = m-1;
            else if(target > nums[m]) i = m+1;
            else if(target == nums[m]){
                return m;
            }
            else return -1;
        }
        return -1;
    }
};
