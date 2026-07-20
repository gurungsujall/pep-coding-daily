class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int mxm=INT_MIN;
        for(int i:nums){
            sum=sum+i;
            mxm=max(mxm,sum);
            if(sum<0){
                sum=0;
            }

        }
        return mxm;
    }
};