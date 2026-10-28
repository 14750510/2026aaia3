///week08-3.cpp 學習計畫 第三題 螺旋矩陣印出來
///leetcode 54.spiral matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int M=matrix.size(), N=matrix[0].size();
        int up=0, down=M-1,left=0, right=N-1;
        while(ans.size()<M*N){
            for (int j = left; j <= right; j++)ans.push_back(matrix[up][j]);
            up++;
            for (int i = up; i <= down; i++) ans.push_back(matrix[i][right]);
            right--;

            if(ans.size()==M*N)break;

            for (int j = right; j >= left; j--)ans.push_back(matrix[down][j]);
            down--;
            for (int i = down; i >= up; i--)ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
