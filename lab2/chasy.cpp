#include "StdAfx.h"
#include "chasy.h"
#include <iostream>
using namespace std;
Chasy::Chasy(void)
{
	cout << "���������� ����������� �����" << endl;
}
void Chasy::set1(int fun)
{
	this->fun = fun;
}
void Chasy::get1()
{
	cout << "���������� ������� �� �����: " << this->fun << endl;
}
Chasy::~Chasy(void)
{
	cout << "���������� ���������� �����" << endl;
}