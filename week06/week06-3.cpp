///week05-3.cpp 學習計畫 simulation 第二題
///leetcode 657.Robot Return to Origin
///機器人 往上U 往下D 往左L 往右R,問是否會回到原來位置
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(char c:moves){
            if(c=='U') y++;///上
            if(c=='D') y--;///下
            if(c=='L') x--;///左
            if(c=='R') x++;///右
        }
        if(x==0&&y==0)return true;
        else return false;
    }
};
