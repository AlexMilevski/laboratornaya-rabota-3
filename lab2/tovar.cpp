#include "StdAfx.h"
#include "tovar.h"
#include <iostream>
using namespace std;
void Employee::setnumber(int number)
{
this->number=number;
}
void Employee::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Tovar * q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		};
	};
}
void Employee::getnumber()
{
cout<<"номер продукта: "<<this->number<<endl;
}
void Employee::show()
{
	Tovar *p = head;
	while (p)
	{
		p->getnumber();
		p->getotdel();
		p = p->next;
	}
}

Tovar::Tovar(void): Prodykt::Prodykt()
{
	cout<<"вызывается конструктор товара"<<endl;
}
void Employee::setotdel(char *to)
{
	this->to=to;
}
void Employee::getotdel()
{
	cout<<"отдел товара: "<<this->to<<endl;
}

Employee::Employee(void):
	Tovar::Tovar()
{

}
