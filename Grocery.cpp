#include <iostream>
#include "Tovar.h"
#include "Grocery.h"

using namespace std;

Grocery::Grocery():Tovar(){}
Grocery::Grocery(string name, float price):Tovar(name, price){ }

void Grocery::print() const
{
setlocale(LC_ALL, "Russian");
cout << "Информация о Бакалея:" << endl;
cout << "Название : " << name << endl;
cout << "Цена : " << price <<endl;
}
