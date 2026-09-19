class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;

        for(int right = 0; right < n; right++) {

            // Window ke bahar wale index ko remove karo
            while(!dq.empty() && dq.front() <= right - k) {
                dq.pop_front();
            }

            // Chhoti values ko remove karo
            while(!dq.empty() && nums[dq.back()] <= nums[right]) {
                dq.pop_back();
            }

            dq.push_back(right);

            // Jab window size k ho jaye
            if(right >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};