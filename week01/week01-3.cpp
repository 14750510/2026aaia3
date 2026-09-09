///week01-3.cpp 學習計畫 basic第三題
///Leetcode 28.find the index of the first occurrence  in a string
///大海撈針
class Solution {
public:
    int strStr(string haystack, string needle) {
    int n1=haystack.length(),n2=needle.length();
    for(int i=0;i<=n1-n2;i++){
        if(haystack.substr(i,n2)==needle)return i;
        ///如果大字串的.substr(開始,長度)等於小字串,就找到答案了
    }
      return -1;///找不到
    }
};
