#include "StdAfx.h"
#include "konfety.h"
#include <iostream>
using namespace std;
Konfety::Konfety(void)
{
	cout<<"���������� ����������� ������"<<endl;
}
void Konfety::set3(int sum)
{
	this->sum=sum;
}
void Konfety::get3()
{
	cout<<"����������� ������(��): "<<this->sum<<endl;
}
Konfety::~Konfety(void)
{
	cout<<"���������� ���������� ������"<<endl;
}