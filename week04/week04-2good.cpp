///week04-2good.cpp 這程式是對的，用進階c++迴圈
///但在CodeBlocks出錯,只有在 warning: range-based 'for' loops only available with
///2011年之後，只有在 -std=c++11 or -std=gnu++11 才能用
///所以，需要改一下設定 Setting-compiler
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	for(int i=0;i<20;i++){
		cin>>now;
		if(now==0)break;
		a.push_back(now);
		}
	cin>>now;
	int ans=0;
	for(int num:a){///設定出錯時，永遠跑不出答案
		if(num==now)ans++;
	}
	cout<<ans<<endl;
}


