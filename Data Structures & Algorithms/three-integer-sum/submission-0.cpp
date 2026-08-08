#include <unordered_map>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> final;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
            int num = nums[i]+nums[j]+nums[k];
            if(num<0) j++;
            else if(num>0) k--;
            else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                final.push_back(temp);
                j++;
                k--;
                while(j<k&&nums[j-1]==nums[j]) j++;
                while(k>j&&nums[k+1]==nums[k]) k--;
            }
        }}
        return final;

        
    }
};