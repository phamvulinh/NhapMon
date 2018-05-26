//linh.cpp
#include<iostream>
using namespace std;
main()
{
	char a,b;
	cin>>a>>b;
	switch(a)
	{
	case'b':
	switch(b)
	{
		case'b':
		cout<<"a Hoa b";
		break;
		case'k':
		cout<<"a Thang B";
		break;
		case'g':
		cout<<"a Thua B";
		break;
	}
	break;
    case'k':
    switch(b)
	{
	   case'b':
	   cout<<"a Thua b";
	   break;
	   case'k':
	   cout<<"a Hoa b";
	   	break;
	   	case'g':
	   	cout<<"a Thang b";
	   	break;
	}
	break;
	case'g':
	switch(b)
	{
		case'b':
		cout<<"a Thang b";
		break;
		case'k':
		cout<<"a Thua b";
		break;
		case'g':
		cout<<"a Hoa b";
		break;
	}
	break;
}
}
