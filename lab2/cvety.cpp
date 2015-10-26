#include "StdAfx.h"
#include "cvety.h"
#include <iostream>
using namespace std;
Cvety::Cvety(void)
{
	cout << "вызывается конструктор цветов" << endl;
}
void Cvety::set2(char *from)
{
	this->from=from;
}
void Cvety::get2()
{
	cout << "Страна вырастившая цветы: " << this->from << endl;
}
Cvety::~Cvety(void)
{
	cout << "вызывается деструктор цветов" << endl;
}