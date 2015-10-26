#include "StdAfx.h"
#include "tort.h"
#include <iostream>
using namespace std;
Tort::Tort(void)
{
	cout<<"вызываетс€ конструктор торта"<<endl;
}
void Tort::set4(int from)
{
	this->kg=kg;
}
void Tort::get4()
{
	cout<<" г тортов поставленных в магазин: "<<this->kg<<endl;
}
Tort::~Tort(void)
{
	cout<<"вызываетс€ деструктор торта"<<endl;
}