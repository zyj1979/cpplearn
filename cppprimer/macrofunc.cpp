#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;
#define MPRINT(val) printf(#val" = %d \n", val)
#define CONCAT(head, val) head ## val


#define OUTPUT_TEXT_HELPER(x) #x
#define OUTPUT_TEXT(x) #x"="OUTPUT_TEXT_HELPER(x)

#define MAX(a, b) ((a)>(b)?(a):(b))

#define PRINT(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT"\n", VALUE)
#define DEBUG_PRINT printf("file:%s\tline:%d\tdate:%s\ttime:%s\n",\
                        __FILE__, __LINE__, __DATE__, __TIME__);

#define PRINTK(FORMAT, VALUE) printf("the value of " #VALUE " is "FORMAT"\n", VALUE);

#define ADD_TO_AN(num, value) a##num += value


#define f(a,b) a##b
#define g(a)  #a
#define h(a) g(a)


//#define INFOVER(s) #s"file=" __FILE__ ",line="__LINE__
int test_macro_basic()
{
	cout << "test macro func "<<endl;
	int val1 = 230;
	int test1 = 123456;
	MPRINT(val1);

	cout<<"test concat " << CONCAT("head", "text") <<endl;

	//cout<<MPRINT(test1);
	
	cout<<OUTPUT_TEXT(MPRINT(test1))<<endl;
	cout<<"test1"<<endl;
	cout <<OUTPUT_TEXT(MAX(val1,test1))<<endl;
	cout <<MAX(val1,test1)<<endl;
	//cout <<INFOVER("test1") <<endl;
	DEBUG_PRINT;

	printf("%s\n",h(f(1,2)));
  printf("%s\n",g(f(1,2)));
  
  cout<<endl<<"cplusplus compiler version is " << __cplusplus <<endl;

  int test2= 0xff;
  cout<<"test1 addr is " << &test2 <<endl;


  int &ref1 = test2;
  cout << "ref1 addr is "<< &ref1 <<endl;
  
	return 1;
}
