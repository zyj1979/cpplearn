// cppprimer.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include <iostream>

#include "TSub.h"
#include "arrayaddr.h"
#include "TComplex.h"
#include "macrofunc.h"
#include "tpointer.h"


using namespace std;

int test_basic_order();
int test_complex();
void show_menu();
void action_menu();

void action_menu();
void get_type_size();
void get_vtbl_addr();

void test_h_com();

void test_h_com()
{
	TSub subtest;
}

void get_type_size()
{
	double *pval;
	double dbval = 0;
	char ary1[8] = {0};
	int *pint;
	
	pval = &dbval;
	
	cout<<"get type size, call sizeof() " <<endl;
	cout << "sizeof(short int) =" << sizeof(short int) <<" sizeof(unsigned short int ) = " <<sizeof(unsigned short int)<<endl;
	cout << "sizeof(int) =" << sizeof(int) <<" sizeof(long int ) = " <<sizeof(long int)<<endl;
	cout << "sizeof(unsigned long) ="<< sizeof(unsigned long) <<endl;
	cout << "sizeof(long long) ="<< sizeof(long long) <<endl;
	cout << "sizeof(float) ="<< sizeof(float) <<endl;
	
	cout<<"sizeof(pval)= "<< sizeof(pval) << " sizeof(*pval-double) = "<< sizeof(*pval) <<endl;
	cout<<"sizeof(ary1)=" << sizeof(ary1) << " sizeof(*ary1) = "<< sizeof(*ary1) <<endl; 
	cout<<"sizeof(string) ="<<sizeof(string) <<endl; //<< "sizeof(CString) = "<<sizeof(CString)endl;

	//TStruct struct1;

}

//����麯����ĵ�ַ
void get_vtbl_addr()
{
	cout<< "test class's vptr sub1 is " <<endl <<endl;
	TSub sub1;
	sub1.ShowMsg();

	cout<< "base1 is " <<endl <<endl;
	TBase base1;
	base1.ShowMsg();

	cout << "Copy Sub object to Base object" <<endl<<endl;
	TBase base2 = sub1;
	base2.ShowMsg();
    
	void *pbasevptr = GetClassVptr(&base2);
	cout<<"Base vptr addr is " << pbasevptr <<endl;
}

void show_menu()
{
	cout<<endl<<"Cpp Language Test "<<endl;
	cout<<" 1 ���Ա��ʽ˳��" <<endl;
	cout<<" 2 �������ʹ�С "<<endl;
	cout<<" 3 ����麯�����ַ" <<endl;
	cout<<" 4 ����2ά�����ַ"<<endl;
	cout<<" 5 ����complex��"<<endl;
	cout<<" 6 ������д��complex��" <<endl;
	cout<<" 7 ���Ժ궨��" <<endl;
	cout<<" 8 ���Լ̳�+��ϵĵ���˳��" <<endl;
	cout<<" 9 ����ָ�� " <<endl;
	cout<<" 0 �˳�" <<endl;
	cout << "������ѡ��:"<<endl;
	
}

void action_menu()
{
    int inputnum;

	while(1)
	{
		show_menu();
		cin >> inputnum;
		switch(inputnum)
		{
		case 0:
			return;
			break;
		case 1:
			test_basic_order();
			break;
		case 2:
			get_type_size();
			break;
		case 3:
			get_vtbl_addr();
			break;
		case 4:
			test2darryaddr();
	
			break;
		case 5:
			test_complex();
			break;
		case 6:
			TestTComplexFunc();
			break;
		case 7:
			test_macro_basic();
		case 8:
			test_h_com();
			break;
		case 9:
			test_pointer_incre();
			break;
		case 10:
			break;
		}
	}


}



int _tmain(int argc, _TCHAR* argv[])
{
	cout<<"Cpp Demo cpp compiler is "<<__cplusplus <<endl;
	action_menu();
	
	return 0;
}

int test_basic_order()
{
	int k1,k2,k3;

	cout<< " test basic order " <<endl;
	k1 = 7;
	k2 = 2;
	k3 = 3;

	k1 += k2 += k3;

	cout << "k1 =" <<k1 << " k2= "<<k2 << "k3= "<<k3<<endl;
	return 1;
}

