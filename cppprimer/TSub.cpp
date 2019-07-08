#include "stdafx.h"
#include <iostream>
#include "TSub.h"

using namespace std;

TSub::TSub()
{
	cout<<"Sub Class Initialize"<<endl;
}

TSub::~TSub()
{
	cout<<"Sub Class Destroy"<<endl;
}

void TSub::ShowMsg()
{
	void *pVptr;
	pVptr = GetVptrAddr(this);

	cout<<"TSub base addr is "<< (void *)this<<endl;
	cout <<" TSub vptr is " << pVptr <<endl;
}

void* GetClassVptr(void *pbaseaddr)
{
	return (void *) *(unsigned long*)pbaseaddr;
}

 int TSub::TestFunc()
{
	return 100;
}

 TComponent::TComponent()
 {
	 cout<<"TComponent CTOR"<<endl;
 }
 TComponent::~TComponent()
 {

 }