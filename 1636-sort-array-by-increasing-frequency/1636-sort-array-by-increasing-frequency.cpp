class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> p;
        vector<int> ans;
        for(auto i:mp){
            p.push({i.second,-i.first});
        }
        while(!p.empty()){
            auto f=p.top();
            for(int i=0;i<f.first;i++){
                ans.push_back(-f.second);
            }
            p.pop();
        }
        return ans;


    }
};