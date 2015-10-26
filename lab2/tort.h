#pragma once
#include "tovar.h"
class Tort :
	public Employee
{
protected:
	int kg;
public:
	Tort(void);
	void set4(int x);
	void get4();
	~Tort(void);
};