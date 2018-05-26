//linh.cpp
#include<iostream>
#include <string>
using namespace std;
main()
{
float toan,ly,hoa,tbinh;
cout<<"Nhap diem toan:";
cin>>toan;
cout<<"Nhap diem ly:";
cin>>ly;
cout<<"Nhap diem hoa:";
cin>>hoa;
cin.ignore();
string ten;
getline(cin,ten);

cout<<"Ten SV:"<<ten<<endl;
tbinh=(toan+ly+hoa)/3;
cout<<"Ket qua trung binh:"<<(toan+ly+hoa)/3<<endl;
if(tbinh>=8)
{
cout<<"xuat sac"<<endl;
if(7<=tbinh<8)
{cout<<"gioi"<<endl;
if(6<=tbinh<7)
{
cout<<"kha"<<endl;
if(5<=tbinh<=6)
{
cout<<"Trung Binh"<<endl;
}
}
}
}
else
{
cout<<"yeu"<<endl;
}

}
