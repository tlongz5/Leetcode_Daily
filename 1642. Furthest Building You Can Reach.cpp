class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> q;
        for(int i=1;i<heights.size();i++){
            if(heights[i]<=heights[i-1]) continue;
            int tmp=heights[i]-heights[i-1];
            if (bricks>=tmp) {
                q.push(tmp);
                bricks-=tmp;
            }else{
                if(!ladders) return i-1;
                --ladders;
                if(!q.empty() && q.top()>tmp) {
                    int max_br=q.top();q.pop();
                    q.push(tmp);
                    bricks+=max_br-tmp;
                }
            }
        }
        return heights.size()-1;
    }
};
