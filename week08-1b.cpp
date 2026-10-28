///week08-1b.cpp 學習計畫 第一題 最有錢的錢
///leetcode 1672.richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;///最有錢的人,有多少錢
        int M=accounts.size(), N=accounts[0].size();
        for(int i=0;i<M;i++){///左手i 範圍M
            int now=0;///小圈圈前面now是0
            for(int j=0;j<N;j++){///右手j 範圍N
                now+=accounts[i][j];///小迴圈中間now+=
            }
            if(now>ans)ans=now;///小迴圈後面now拿來用
        }
        return ans;
    }
};
