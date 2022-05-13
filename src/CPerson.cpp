#include "CPerson.h"

CPerson::CPerson():
   nname("Nobody"),
   vname("Nobody"),
   gdatum("28.12.1973")
{
   cout << "Person default construtor" << endl;
}

CPerson::CPerson(const string& vname, const string& nname, const string& gdatum) :
   nname(nname),
   vname(vname),
   gdatum(gdatum)
{
   cout << "Person construtor" << endl;
}

std::ostream& operator<<(std::ostream& out, const CPerson& p)
{
   out << "Name: " << p.vname << " " << p.nname << " (" << p.gdatum << ")" << endl;
   return out;
}

