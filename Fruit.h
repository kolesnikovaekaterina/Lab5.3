#ifndef FRUIT_H_INCLUDED
#define FRUIT_H_INCLUDED
#include "tovar.h"

using namespace std;

class Fruit : public Tovar

{

protected:
string country;
public:
Fruit();
Fruit(string name, float price, string country);
Fruit (const Fruit &tov);
void setcountry(string scountry);
string getcountry () const;
void operator=(Fruit &f);
void print() const;

};

#endif // FRUIT_H_INCLUDED
