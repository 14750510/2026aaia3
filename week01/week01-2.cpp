///week01-2.cpp
#include <iostream>///c++ªº¿é¤J¿é¥X
int main()
{
	int n;
	std::cin>>n;
	int b=n,ans=0;
	while(n>0){
		ans=ans*10+n%10;
		n=n/10;
	}
	std::cout<<b<<"+"<<ans<<"="<<b+ans<<std::endl;
}
