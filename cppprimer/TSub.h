#ifndef TSUB_H_
#define TSUB_H_
#include "TBase.h"


class TComponent 
{
public:
	TComponent();
	~TComponent();
private:
	int m_c1;
};

class TSub : public TBase
{
public:
	TSub();
	virtual ~TSub();
	virtual void ShowMsg();
public:
	static int TestFunc() ;
private:
	int m_subdata;
	TComponent mobject;

};


void* GetClassVptr(void *pbaseaddr);
#endif