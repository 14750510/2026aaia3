///week09-2.cpp 學習計畫 matrix 第四題
///leetcode 73.set marix zeroes
///把0的直行、橫行，都設成0，而且void不用return
///in place 直接把修改的結果，改在matrix裡面
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();///長、寬
        vector<int>left(m);///左邊的對照表，m對i
        vector<int>up(n);///上面的對照表，n對j
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    left[i]=1;///左邊的對照表，打勾勾
                    up[j]=1;///上面的對照表，打勾勾
                }
            }
        }///上面迴圈打勾勾
        ///下面迴圈汙染整條(兩組迴圈，不能合起來)
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(left[i]==1||up[j]==1)matrix[i][j]=0;
            }
        }
    }
};
