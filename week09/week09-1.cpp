///week09-1.cpp 學習計畫 Matrix diagonl sum
///矩陣 希望把兩條對角線上面的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();///矩陣大小
        int ans=0;///迴圈裡面對角線
        for(int i=0;i<n;i++){///左上到右下
            ans+=mat[i][i];
        }
        for(int i=0;i<n;i++){///左下到右上
            ans+=mat[n-1-i][i];
        }
        ///不能重複
        if(n%2==1)ans-=mat[n/2][n/2];
        return ans;
    }
};
