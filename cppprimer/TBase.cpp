#include "stdafx.h"
#include <iostream>
#include "TBase.h"

using namespace std;

TBase::TBase()
{
	m_basedata = 20;
	cout << " Call TBase Init "<<endl;
}

TBase::~TBase()
{
	cout << " Call ~TBase Destroy "<<endl;
}

///显示本类的地址
void TBase::ShowMsg()
{
	void *pVptr;
	pVptr = GetVptrAddr(this);
	
	cout << " TBase Addr is "<<this<<endl;
	cout <<" TBase vptr is " << pVptr <<endl;
}


void* TBase::GetVptrAddr(void *classaddr)
{
	return (void *) *(unsigned long*)classaddr;
}

TStruct::TStruct(int n)
{
	this->m_n1 = n;
	cout<<"TStruct CTOR"<<endl;
}