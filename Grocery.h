#ifndef GROCERY_H_INCLUDED
#define GROCERY_H_INCLUDED
#include "Tovar.h"

class Grocery: public Tovar
{
public:
Grocery();
Grocery (string name, float price);
void print() const;
};

#endif // GROCERY_H_INCLUDED
