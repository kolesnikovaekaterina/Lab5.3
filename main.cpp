#include <iostream>
#include "Tovar.h"
#include "Fruit.h"
#include "Milk.h"
#include "Grocery.h"

using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");

Fruit ff;
ff.setname("apple");
ff.setprice(100);
ff.setcountry("Russia");
ff.print();

Milk mm;
mm.setname("curd");
mm.setprice(50);
mm.setfatness(4.2);
mm.setvolume(500);
mm.print();

Grocery gg;
gg.setname("rice");
gg.setprice(85);
gg.print();

return 0;
}
