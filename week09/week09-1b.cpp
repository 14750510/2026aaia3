///week09-1b.cpp 學習計畫 Matrix diagonl sum
///矩陣 希望把兩條對角線上面的數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();///矩陣大小
        int ans=0;///迴圈裡面對角線
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j||i+j==n-1)ans+=mat[i][j];
            }
        }
        return ans;
    }
};
