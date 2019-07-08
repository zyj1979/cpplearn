#include "stdafx.h"
#include "tpointer.h"
#include <iostream>

using namespace std;

#define PRINTTX(x) #x
#define PRINTTX_HELP(x)  #x"="PRINTTX(x) 

void test_pointer_incre()
{
	char *p = NULL;
	short int *pshort = NULL;
	int  *pint = NULL;
	int  **ppint = NULL;

	++p;
	++pshort;
	pint += 10;
	++ppint;
    
	printf("p= %x, pshort=%d, pint=%d, ppint=%d \n", p, pshort, pint, ppint );
	
	
	cout<<"p = "<< (void*)p<<endl;
	
	cout<<"pshort = "<< (void*)pshort<<endl;
	cout<<"pint = "<<  (void*)pint << endl;
	cout<<"ppint = " <<  (void*)ppint <<endl;
    

    cout<<"macro_h TPOINTER_H_  is "<< PRINTTX_HELP(TPOINTER_H_)<<endl;

}