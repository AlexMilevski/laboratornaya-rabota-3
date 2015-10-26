#pragma once
#include "tovar.h"
class Chasy :
	public Employee
{
protected:
	int fun;
public:
	Chasy(void);
	void set1(int x);
	void get1();
	~Chasy(void);
}; 
