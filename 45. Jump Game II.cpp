class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n);
        v[0]=0;
        for(int i=1;i<n;i++){
            int tmp=INT_MAX;
            for(int j=i-1;j>=max(0,i-1000);j--){
                tmp=min(tmp,j+nums[j]>=i? v[j]+1:INT_MAX);
            }
            v[i]=tmp;
        }
        return v[n-1];
    }
};
