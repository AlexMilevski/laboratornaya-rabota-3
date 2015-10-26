#include "stdafx.h"
#include "prodykt.h"
#include "tovar.h"
#include "chasy.h"
#include "cvety.h"
#include "konfety.h"
#include "tort.h"
#include "locale"
#include <iostream>
using namespace std;
Tovar * Tovar::head = NULL;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Employee a;
	a.setnumber(532);
	a.getnumber();
	a.setotdel("Отдел техники");
	a.getotdel();
	cout << endl;

	Employee b;
	b.setnumber(522);
	b.getnumber();
	b.setotdel("Отдел продуктов");
	b.getotdel();
	cout << endl;
	b.add();
	a.add();

	Tort c;
	c.setnumber(533);
	c.setotdel("Отдел продуктов");
	c.add();


	Employee::show();
	cout << endl;
	return 0;
}