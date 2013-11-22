// SafeArray.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include"safe.h"
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(int argc, _TCHAR* argv[])
{
	int num,pos,value;
	cout<<"input the numbers of array"<<endl;
	cin>>num;
	safe *s=new safe(num);
	cout<<"input the number you want to set value first pos second"<<endl;
    cin>>value>>pos;
	s->setValue(value,pos);
	cout<<"get the pos of number you want to get"<<endl;
	cin>>pos;
	value=s->getValue(pos);
	//cout<<value<<endl;
	if(s->lastError)
	{
		 cout<<value<<endl;
	}else{
		cout<<"the index pos is illeagal"<<endl;
	}
	system("pause");
	delete s;
	return 0;
}

