#include <iostream>
#include "Tovar.h"

using namespace std;

Tovar::Tovar()
{
name = "Potato";
price = 115.2;
}
Tovar::Tovar(string name, float price):Tovar()
{
setname(name);
setprice(price);
}
Tovar::Tovar(const Tovar &t)
{
this-> name = t.name;
this-> price = t.price;
}
void Tovar::setname(string sname)
{
this->name=sname;
}
void Tovar::setprice(float sprice)
{
this->price=sprice;
}
string Tovar::getname() const
{
return name;
}
float Tovar::getprice() const
{
return price;
}
void Tovar::operator=(Tovar &q)
{
setname(q.name);
setprice(q.price);
}
