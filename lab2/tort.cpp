#include "StdAfx.h"
#include "tort.h"
#include <iostream>
using namespace std;
Tort::Tort(void)
{
	cout<<"���������� ����������� �����"<<endl;
}
void Tort::set4(int from)
{
	this->kg=kg;
}
void Tort::get4()
{
	cout<<"�� ������ ������������ � �������: "<<this->kg<<endl;
}
Tort::~Tort(void)
{
	cout<<"���������� ���������� �����"<<endl;
}