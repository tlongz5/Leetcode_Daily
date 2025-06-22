class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
        int cnt=0;
        string t="";
        for(auto &x:s){
            ++cnt;
            t+=x;
            if(cnt==k) {
                v.push_back(t);
                t="";
                cnt=0;
            }
        }
        if(cnt) {
            for(int i=cnt;i<k;i++) t+=fill;
            v.push_back(t);
        }

        return v;
    }
};
