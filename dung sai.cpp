//linh.cpp
#include<iostream>
using namespace std;
main()
{
cout<<"A:int1x=10"<<endl
 << "B:int x=10"<<endl
 << "C:Float x=10.0f"<<endl
 << "D:string x=10"<<endl;
char dapan;
cin>>dapan;
switch(dapan)
{
case'a':
case'A':
{
cout<<"A:int 1x=10"<<endl
<<"Dap an sai";
}
break;
case'b':
case'B':
{
cout<<"B:int x=10"<<endl
<<"Dap an sai";
}
break;
case'c':
case'C':
{
cout<<"C: Float x=10.0f"<<endl
<<"Dap an dung";
}
break;
case'd':
case'D':
{
cout<<"D: string x=10"<<endl
<<"Dap an sai";
}
break;
}
}
