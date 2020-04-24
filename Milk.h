#ifndef MILK_H_INCLUDED
#define MILK_H_INCLUDED
#include "Tovar.h"

using namespace std;

class Milk : public Tovar
{

protected:
float fatness;
float volume;
public:
Milk();
Milk(string name, float price, float fatness, float volume);
void setfatness (float sfatness);
void setvolume (float svolume);
float getfatness () const;
float getvolume () const;
void print() const;
void operator= (Milk &m);

};

#endif // MILK_H_INCLUDED
