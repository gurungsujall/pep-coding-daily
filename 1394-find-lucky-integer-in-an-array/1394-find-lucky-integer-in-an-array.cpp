class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxx=-1;
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.first==i.second){
                maxx=max(maxx,i.first);
            }
        }
        return maxx;
    }
};