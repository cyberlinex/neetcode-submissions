#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> a;
        
        for(auto &x : strs){
            string key = x;
            sort(key.begin(),key.end());
            mp[key].push_back(x);
        }
        for(auto &p : mp){
            a.push_back(p.second);
        }
        return a;
    }
};
