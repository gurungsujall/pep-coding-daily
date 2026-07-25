class Solution {
public:
    int maxProduct(int n) {
        int lar=INT_MIN;
            int slar=0;
        while(n>0){
            int dig=n%10;
            if(dig>lar){
                slar=lar;
                lar=dig;
                
            }else if(dig>slar){
                slar=dig;
            }
            n=n/10;
        }
        return lar*slar;
    }
};