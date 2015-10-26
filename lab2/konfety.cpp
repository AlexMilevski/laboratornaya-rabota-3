#include "StdAfx.h"
#include "konfety.h"
#include <iostream>
using namespace std;
Konfety::Konfety(void)
{
	cout<<"вызывается конструктор конфет"<<endl;
}
void Konfety::set3(int sum)
{
	this->sum=sum;
}
void Konfety::get3()
{
	cout<<"колличество конфет(кг): "<<this->sum<<endl;
}
Konfety::~Konfety(void)
{
	cout<<"вызывается деструктор конфет"<<endl;
}