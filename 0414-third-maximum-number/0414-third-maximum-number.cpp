class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maximum = nums[n-1];
        set<int> numbers;
        for(int i=0;i<n;i++)
        {
            numbers.insert(nums[i]);
        }
        int m = numbers.size();
        if(m>=3)
        {
            auto rit = numbers.rbegin();
            advance(rit,2);
            maximum = *rit;
        }


    return maximum;
    }
};