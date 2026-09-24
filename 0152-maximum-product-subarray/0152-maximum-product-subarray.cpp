class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int curMax=nums[0];
        int curMin=nums[0];
        int MaxPro=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0)
            {
                swap(curMax,curMin);
            }
            curMax=max(nums[i],curMax*nums[i]);
                curMin=min(nums[i],curMin*nums[i]);
                MaxPro=max(MaxPro,curMax);
        }
        return MaxPro;

        
        
    }
};