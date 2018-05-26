//linh.cpp
#include<iostream>
using namespace std;
main(){
char color;
cout<<"Nhap Vao Ki Tu:";
cin>>color;
switch(color){
case'R':
case'r':
cout<<"RED";
break;
case'G':
case'g':
cout<<"GREEN";
break;
case'B':
case'b':
cout<<"BLUE";
break;
default:
cout<<"BLACK";
}
}
