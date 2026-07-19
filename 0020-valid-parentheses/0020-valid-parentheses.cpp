class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(auto i:str){
            if(i=='(' or i=='{' or i=='['){
                s.push(i);
            }
            else{
                if(s.empty()){
                    return false;
                }
                else{
                    if( (s.top()=='(' && i==')') ||
                        (s.top()=='{' && i=='}')||
                        (s.top()=='[' && i==']')){
                            s.pop();
                        }
                        else{
                            return false;
                        }
                }
            }
        }
        return s.size()==0;
        
    }
};