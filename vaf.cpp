//linh.cpp
#include<iostream>
using namespace std;
main()
{
int a,b;
	cin>>a;
	cin>>b;
	if(a!=0&&b!=0)
	{
		cout<<"x="<<(float)-b/a;
	}
	else if(a==0&&b==0)
	{
		cout<<"pt co vo so nghiem";
		}
	else
	{
		cout<<"vo nghiem";
	}
}
