class Solution {
public:
    int maxDistance(string s, int k) {
        int cntS=0,cntN=0,cntE=0,cntW=0;
        int Max=0,sum=0;
        for(auto &x:s) {
            if(x=='S') ++cntS;
            else if(x=='N') ++cntN;
            else if(x=='E') ++cntE;
            else ++cntW;

            int dx=min(cntN,cntS);
            int dy=min(cntE,cntW);
            int sum=max(cntN,cntS)+max(cntE,cntW)-dx-dy;
            Max=max(sum + (dx+dy<=k ? dx+dy:k)*2,Max) ;
        }
        return Max;
    } 
};
