//linh.cpp
#include<iostream>
#include<math.h>
using namespace std;
main()
{
		float a,b,c,d,x; // make x >= 0 is true -> while will run
	 cin>>a>>b>>c>>x;
    while (x == 0){
    	printf("Nhap vao de tiep tuc ");
    	scanf("%d", &x,&a,&b,&c);
	if(a==0)
	{
		cout<<"x="<<-c/b;
	}
	else
	{
		d=b*b-4*a*c;
		if(d<0)
		{
			cout<<"PT VO NGIEM";
		}
		else
		{
			if(d==0)
			{
				cout<<"PT CO NGHIEM KEP"<<-b/(2*a);
			}
			else
			{
				cout<<"X1="<<(-b-sqrt(d))/(2*a)<<endl
				<<"X2="<<(-b+sqrt(d))/(2*a);		
			}
		
		}
	}
	}	
	}
