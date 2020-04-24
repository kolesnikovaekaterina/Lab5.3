#ifndef TOVAR_H_INCLUDED
#define TOVAR_H_INCLUDED

using namespace std;

class Tovar
{
protected:
string name;
float price;
public:
Tovar();
Tovar (string name, float price);
Tovar (const Tovar &t);
void setname(string sname);
void setprice (float sprice);
string getname ()const;
float getprice () const;
void operator= (Tovar &q);
};



#endif // TOVAR_H_INCLUDED
