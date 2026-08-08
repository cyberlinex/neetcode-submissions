#include <unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    vector<int> a;
    for (int x:nums){
        mp[x]++;
    }
    int max = 0;
    int index = 0;
    for(int i=0;i<k;i++){
    max =0;
    for(auto &p : mp){
        if(max <= p.second){
        max = p.second;
        index = p.first;
        }
    }
    mp.erase(index);
    a.push_back(index);
    
    }
    
    return a;
    }
};