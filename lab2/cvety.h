#pragma once
#include "tovar.h"
class Cvety :
	public Employee
{
protected:
	char *from;
public:
	Cvety(void);
	void set2(char *from);
	void get2();
	~Cvety(void);
};