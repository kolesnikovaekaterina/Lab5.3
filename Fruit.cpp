#include <iostream>
#include "Tovar.h"
#include "Fruit.h"

using namespace std;

Fruit::Fruit():Tovar(), country ("Spain"){}
Fruit::Fruit(string name, float price, string country):Tovar(name, price),country("Germany")
{
(setcountry (country));
}
Fruit::Fruit(const Fruit &tov)
{
this->country=tov.country;
}
void Fruit::setcountry (string scountry)
{
this->country = scountry;
}
string Fruit::getcountry() const
{
return country;
}
void Fruit::operator=(Fruit &f)
{
(setcountry (f.country));
}
void Fruit::print() const
{
setlocale(LC_ALL, "Russian");
cout << "Информация о Фрукты:" << endl;
cout << "Название : " << name << endl;
cout << "Цена : " << price <<endl;
cout << "Страна производства : " << country << endl << endl;
}
