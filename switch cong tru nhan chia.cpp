//linh.cpp
#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"Nhap vao gia tri a:";
	cin>>a;
	cout<<"Nhap vao gia tri b:";
	cin>>b;
	char pheptinh;
	cout<<"Nhap vao phep tinh:";
	cin>>pheptinh;
	switch (pheptinh)
	{
	case '+':
	cout<<"a+b="<<a+b;
	break;
	case '-':
	cout<<"a-b="<<a-b;
	break;
    case '*':
    cout<<"a*b="<<a*b;
    break;
    case '/':
    if(b!=0){
    cout<<"a/b="<<a/b;
}
    else
    {
    cout<<"Khong Chia Duoc";
	}
    break;
    default:
    {
    	cout<<"Ki Tu Khong Hop Le";
	}
	}
}
