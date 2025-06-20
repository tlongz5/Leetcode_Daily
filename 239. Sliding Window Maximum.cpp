class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int> q;
        priority_queue<int> qu;
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        vector<int> v;
        v.push_back(q.top());
        for(int i=k;i<n;i++) {
            q.push(nums[i]);
            qu.push(nums[i-k]);
            while(!qu.empty() && q.top()==qu.top()) {
                qu.pop();
                q.pop();
            }
            v.push_back(q.top());
        }
        return v;
    }
};
