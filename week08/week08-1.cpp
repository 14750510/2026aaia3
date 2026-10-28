///week08-1.cpp 學習計畫 第一題 最有錢的錢
///leetcode 1672.richest customer wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;///最有錢的人,有多少錢
        for(vector<int>a:accounts){///大資料結構,取出中資料結構
            int now=0;///迴圈前面now是0
            for(int num:a){///中資料結構,取出小資料結構
                now+=num;///慢慢加
            }
            ans=max(ans,now);///迴圈後面拿出來用
        }
        return ans;
    }
};
