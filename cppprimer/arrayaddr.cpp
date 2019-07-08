#include "stdafx.h"
#include <iostream>

#include "arrayaddr.h"

using namespace std;

int g_array2d[5][10];

//
void test2darryaddr()
{
	int array2d[5][10] ;

	cout<<"Test Array2d addr " <<endl;
	memset(array2d, 0x0, sizeof(array2d));
	array2d[1][0] = 60;

	cout << "sizeof(array2d) = " << sizeof(array2d) << endl;
	cout<<"array2d+1 = "<< array2d+1 << "  *(array2d+1) = " << *(array2d+1) <<endl;
	
	cout<< " *( *(array2d+1)) = " << *(*(array2d+1)) <<endl;
	
	
	cout<<"g_array2d+1 = "<< g_array2d+1 << "  *(g_array2d+1) = " << *(g_array2d+1) <<endl;
	return;
}
