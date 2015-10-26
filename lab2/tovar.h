#pragma once
#include "prodykt.h"
class Tovar :
	public Prodykt
{
protected:
	static Tovar* head;
	char *to;
public:
	Tovar* next;
	Tovar(void);
virtual	void setotdel(char *to)=0;
virtual	void getotdel()=0;
virtual	void setnumber(int number)=0;
virtual	void add()=0;
virtual	void getnumber()=0;
};
class Employee :
	public Tovar
{
public:
	Employee(void);
	void setotdel(char *to);
	void getotdel();
	void setnumber(int number);
	void add();
	void getnumber();
	static void show();

};