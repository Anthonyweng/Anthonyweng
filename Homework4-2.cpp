// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int fac(int x)   //�ݹ麯��  
{  
    int f;  
    if(x==0||x==1)
	{
		return 1;
	}
	return fac(x-1)*x;

}  

int Combination(int m,int n)
{
	float c;
	c=fac(m)/(fac(m-n)*fac(n));
	return c;
}

int main()
{
	int m,n;
	cout<<"Input m "<<endl;
	cin>>m;
	cout<<"Input n "<<endl;
	cin>>n;
	cout<<"C��"<<m<<","<<n<<")="<<Combination(m,n)<<endl;
	cout<<"input 0 to end it"<<endl;
	cin>>n;
	return 0;
}

