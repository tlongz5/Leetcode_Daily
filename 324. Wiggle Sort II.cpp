class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        vector<int> v(n);
        int l=0;
        for(int i=1;i<nums.size();i+=2){
            v[i]=nums[l++];
        }
        for(int i=0;i<nums.size();i+=2){
            v[i]=nums[l++];
        }
        

        for(int i=0;i<nums.size();i++) nums[i]=v[i];
    }
};
