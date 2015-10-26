#include "StdAfx.h"
#include "chasy.h"
#include <iostream>
using namespace std;
Chasy::Chasy(void)
{
	cout << "вызывается конструктор часов" << endl;
}
void Chasy::set1(int fun)
{
	this->fun = fun;
}
void Chasy::get1()
{
	cout << "Разделение времени на часах: " << this->fun << endl;
}
Chasy::~Chasy(void)
{
	cout << "вызывается деструктор часов" << endl;
}