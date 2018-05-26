//linh.cpp
#include<iostream>
using namespace std;
main()
{
float giolam,luong;
cout<<"Nhap So Gio Lam:";
cin>>giolam;
cout<<"Nhap Luong Theo Gio:";
cin>>luong;
if(giolam<=40)
{
cout<<"Tien luong duoc nhan la:"<<giolam*luong;
}
else
{
cout<<"Tien luong duoc nhan la:"<<40*luong+(giolam-40)*luong*1.5;
}
}
