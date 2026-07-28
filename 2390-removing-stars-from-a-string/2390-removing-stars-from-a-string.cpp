class Solution {
public:
    string removeStars(string s) {
       stack<int> st;
       string ans="";
       for(int i:s){
            if(i=='*'){
                st.pop();
            }else{
                st.push(i);
                
            }
       }
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};