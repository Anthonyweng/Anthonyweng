// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
float Conversion(float f)
{
	float c;
	c=(f-32)*5/9;
	return c;
}

int main()
{
	float f,c;
	cout<<"Please input temperature"<<endl;
	cin>>f;
	cout<<"c="<<Conversion(f)<<endl;
	cout<<"Input any key to end"<<endl;
	cin>>f;
    return 0;
	
}


