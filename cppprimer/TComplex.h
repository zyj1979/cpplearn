#pragma once

class TComplex
{
public:
	TComplex(void);
	~TComplex(void);

public:
	TComplex(double r, double i=0);
	TComplex(int tmp);
	TComplex(double r=0);

	TComplex operator+=(const TComplex& others);
	void Display();

	double get_rm() const ;
	double get_im() const;

	double get_rm_nc();

private:
	double rm, im; 
	int nums;

};

void TestTComplexFunc();
