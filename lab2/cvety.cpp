#include "StdAfx.h"
#include "cvety.h"
#include <iostream>
using namespace std;
Cvety::Cvety(void)
{
	cout << "���������� ����������� ������" << endl;
}
void Cvety::set2(char *from)
{
	this->from=from;
}
void Cvety::get2()
{
	cout << "������ ����������� �����: " << this->from << endl;
}
Cvety::~Cvety(void)
{
	cout << "���������� ���������� ������" << endl;
}