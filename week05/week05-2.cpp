///week05-2.cpp 學習計畫 in function 第二題
///Leetcode 709.to lower case
///Leetcode 貼心，幫我把#include<cctype>寫好了
class Solution {
public:
    string toLowerCase(string s) {
        ///s[0]='h' 只是例子可改
        for(int i=0;i<s.length();i++){
            ///以前if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]-'A'+'a';
            ///以前if(isupper(s[i]))s[i]=s[i]-'A'+'a';
            s[i]=tolower(s[i]);
        }
        return s;
    }
};
