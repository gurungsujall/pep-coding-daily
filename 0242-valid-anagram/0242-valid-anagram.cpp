class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1;
        if(s.size()!=t.size()){
            return false;
        }
        for(auto i:s){
            s1[i]++;
        }
        for(auto i:t){
            s1[i]--;
        }
        for(auto i:t){
            if(s1[i]!=0){
                return false;
            }
        }
        return true;

    }
};