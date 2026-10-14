///week06-4.cpp 學習計畫 simulation 第ㄧ題
///leetcode 682.baseball game
/// 5: 陣列裡 5
/// 2: 陣列裡 5 2
/// C: 陣列裡 5 (刪掉了最後的2)
/// D: 陣列裡 5 10 (把最後的5,變2倍,塞入)
/// +: 陣列裡 5 10 15 (最後2個數 5+10變15,塞入)
/// 答案是, 把所有的數加起來
class Solution {
public:///week02教string s,week03教vector<int> a
    int calPoints(vector<string>& operations) {
        ///week03 week04教過c++進階for迴圈for(char c:s)for(int num:a)
        vector<int> a;
        for(string s:operations){
            if(s=="C"){
                a.pop_back();
            }else if(s=="D"){
                a.push_back(a[a.size()-1]*2);
            }else if(s=="+"){
                a.push_back(a[a.size()-2]+a[a.size()-1]);
            }else{
                ///a.push_back(stoi(s));//方法1.stoi(s)在c+=11最簡單的方法
                a.push_back(atoi(s.c_str()));///方法2.atoi(s.c_str())轉成傳統c語言的方法
                ///方法3.上週教過的stringsteam字串便串流,再回到答案裡
            }
        }
        int ans=0;
        for(int num:a){
            ans+=num;
        }
        return ans;
    }
};
