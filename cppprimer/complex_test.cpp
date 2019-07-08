#include "stdafx.h"
#include <iostream>
#include "complex.h"

using namespace std;

ostream&
operator << (ostream& os, const complex& x)
{
  return os << '(' << real (x) << ',' << imag (x) << ')';
}

int test_complex()
{
  complex c1(2, 1);
  complex c2(4, 0);

const complex c3(8, 8);


  cout << c1 << endl;
  cout << c2 << endl;
  
  cout << c1+c2 << endl;
  cout << c1-c2 << endl;
  cout << c1*c2 << endl;
  cout << c1 / 2 << endl;
  
  cout << conj(c1) << endl;
  cout << norm(c1) << endl;
  cout << polar(10,4) << endl;
  
  cout << (c1 += c2) << endl;
  
  cout << (c1 == c2) << endl;
  cout << (c1 != c2) << endl;
  cout << +c2 << endl;
  cout << -c2 << endl;
  
  cout << (c2 - 2) << endl;
  cout << (5 + c2) << endl;
  
  cout << "call const function by const object "<<endl;
  cout << c3.imag() << endl;

   
  /*
   cout << "call nonconst function by const object "<<endl;
   cout << c3.get_real() << endl;
   //error C2662: “complex::get_real”: 不能将“this”指针从“const complex”转换为“complex &”
  */
  cout << "call const function by nonconst object "<<endl;
  cout << c1.imag() << endl;
  return 0;
}
