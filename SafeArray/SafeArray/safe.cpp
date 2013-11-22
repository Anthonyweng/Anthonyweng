#include "StdAfx.h"
#include "safe.h"
#include<iostream>
using namespace std;
safe::safe(int n)
{
	this->p=new int [n];
	this->length=n;
	this->lastError=false;
}
safe::~safe(void)
{
	delete p;
}

bool safe::isSafe(int index)
{
	return(index<this->length);
}
void safe::setValue(int value,int pos)
{
	if(this->isSafe(pos))
	{
		 this->p[pos]=value;
	}
	else{
		 cout<<"your pos is illegeal"<<endl;
	}
}
int safe::getValue(int pos)
{
	if(this->isSafe(pos))
    {
		this->lastError=true;
		return(this->p[pos]);
	}else if(pos>this->length&&p[pos]==NULL){//ÒýÆðË¼¿¼
		this->lastError=false;
		return(0);
	}
}