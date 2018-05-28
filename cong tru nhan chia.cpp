//linh.cpp
#include<iostream>
using namespace std;
main(){
int a;
cout<<"Nhap vao gia tri a:";
cin>>a;
if(a%2==0)
{
cout<<"a chan";
}
else
{
cout<<"a le";
}
for(int i=1;i<=100&&i%2==0;i++)
{
cout<<i<<endl;
}
}
