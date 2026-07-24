class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto i:nums){
            freq[i]++;
        }
        vector<int> ans;
        for(auto i:freq){
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};