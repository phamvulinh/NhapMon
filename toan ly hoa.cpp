//linh.cpp
#include<iostream>
using namespace std;
main(){
int toan,ly,hoa;
cout<<"Nhap vao diem toan:";
cin>>toan;
cout<<"Nhap vao diem ly:";
cin>>ly;
cout<<"Nhap vao diem hoa:";
cin>>hoa;
if(toan+ly+hoa>=15&&toan>=4&&ly>=4&&hoa>=4)
{
if(toan>=5&&ly>=5&&hoa>=5)
{
 cout<<"Hoc deu cac mon";
}
else
{
	cout<<"Hoc chua deu cac mon";
}
}
else
{
cout<<"Thi Hong";
}
}
