#include "StdAfx.h"
#include "TComplex.h"
#include <iostream>

using namespace std;

TComplex::TComplex(void)
{
}

TComplex::~TComplex(void)
{
}

TComplex::TComplex(double r, double i):rm(r),im(i)
{
	
}

TComplex::TComplex(int tmp)
{
	cout<<"call func TComplex(int tmp)" <<endl;
}
TComplex::TComplex(double r)
{
	;
}

TComplex TComplex::operator +=(const TComplex& others)
{
	this->rm += others.rm;
	this->im += others.im;
	return *this;
}

void TComplex::Display()
{
	cout<<"Display rm="<<rm<<" im="<<im<<endl;


}

void TestTComplexFunc()
{
	TComplex t1(1.1,2.0), t2(2.3, 3.0), t3(5.1, 4.0);

	TComplex t4(1.1,2.0), t5(2.3, 3.0), t6(5.1, 4.0);

	(t1+=t2)+=t3;

	cout<< "t1 value" <<endl;
	t1.Display();
	cout<< "t2 value" <<endl;
	t2.Display();


	t4+=t5+=t6;

	cout<< "t4 value" <<endl;
	t4.Display();
	cout<< "t5 value" <<endl;
	t5.Display();
	
	
	const TComplex ct1(3.6, 2.0);

	double rm1 = ct1.get_rm();
	
	// ±¨¸æ´íÎó
	//double rm2 = ct1.get_rm_nc();

	double rm3 = t1.get_rm();

}

double TComplex::get_im() const
{
	return im;
}

double TComplex::get_rm() const
{
   return rm;
}

double TComplex::get_rm_nc() 
{
	return rm;
}