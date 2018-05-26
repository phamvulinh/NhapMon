//linh.cpp
#include<iostream>
using namespace std;
main(){
	char pheptinh;
	int a,b;
	cout<<"Nhap vao phep tinh:";
	cin>>pheptinh;
	switch (pheptinh)
	{
	case '+':
	cout<<"a+b";
	break;
	case '-':
	cout<<"a-b";
	break;
    case '*':
    cout<<"a*b";
    break;
    case '/':
    cout<<"a/b";
    break;
    default:
    {
    	cout<<"Ki Tu Khong Hop Le";
	}
	}
}
