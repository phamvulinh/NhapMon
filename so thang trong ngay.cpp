//linh.cpp
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b;
	cin>>a>>b;
	if (a==1)
	{
	cout<<"Thang 1 co so ngay la 30 ngay";	
	}
	else
		{
			if(a==3)
			{
				cout<<"Thang 3 co 30 ngay";
			}
			else
			{
				if(a==4)
				{
					cout<<"thang 4 co 31 ngay";
				}
				else 
				{
					if(a==5)
					{
						cout<<"thang 5 co 30 ngay";
					}
					else
					{
						if(a==6)
						{
							cout<<"thang 6 co 31 ngay";
						}
						else
						{
							if(a==7)
							{
								cout<<"thang 7 co 30 ngay";
							}
							else
							{
								if(a==8)
								{
									cout<<"thang 8 co 31 ngay";
								}
								else
								{
									if(a==9)
									{
										cout<<"thang 9 co 30 ngay";
									}
									else
									{
										if(a==10)
										{
			                             cout<<"thang 10 co 31 ngay";
										}
										else
										{
											if(a==11)
											{
												cout<<"thang 11 co 30 ngay";
											}
											else
											{
												if(a==12)
												{
													cout<<"thang 12 co 31 ngay";
												}
												else
												{
													
	                                                   if(a==2&&(b%400==0||(b%4==0&&b%100!=0)))
	                                                 	{
			                                              cout<<"Thang 2 la nam nhuan co so ngay la 29";
	                                                    }
	                                                    else
	                                                    {
	                                                    	if(a==2&&b%400!=0)
	                                                    	{
	                                                    	 cout<<"Thang 2 la nam thuong co so ngay la 28";	
															}
															else 
															{
																	cout<<"khong ton tai thang nay";
															}
														}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
