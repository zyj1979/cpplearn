#ifndef TBASE_H_
#define TBASE_H_

class TBase
{
 public:
	 TBase();

    virtual ~TBase(); 
 public:
    virtual void ShowMsg();
	
	//������ָ��ֵ
	void* GetVptrAddr(void *classaddr);
 
 private:
	 int m_basedata;

};

struct TStruct
{


	TStruct(int n);
	TStruct *pnext;
	int m_n1;

};

#endif