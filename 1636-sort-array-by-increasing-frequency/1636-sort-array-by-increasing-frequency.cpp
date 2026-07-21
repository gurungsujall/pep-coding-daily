class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
         priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>>pq;
    for(auto i:mp){
        pq.push({i.second,-i.first});
    }
    vector<int> ans;
    while(!pq.empty()){
        auto t=pq.top();
        for(int i=0;i<t.first;i++){
            ans.push_back(-t.second);
        }
        pq.pop();
    }
    return ans;
        
    }
};