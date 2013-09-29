// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Power(int x,int y)
{

	while(y>1)
	{
		x=x*x;
		y--;
	}
	return x;
}

int main()
{
	int x,y;
	cout<<"Input x"<<endl;
	cin>>x;
	cout<<"Input y"<<endl;
	cin>>y;
	cout<<"x^y="<<Power(x,y)<<endl;
	cout<<"Input any key to stop"<<endl;
	cin>>y;
	return 0;
}