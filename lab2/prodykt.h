#pragma once
class  Prodykt
{
protected:
	int number;
public:

	Prodykt(void);
	virtual void setnumber(int number)=0;
	virtual void getnumber()=0;
	
};