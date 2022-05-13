#include <iostream>
#include <string>
#include "CGirokonto.h"
#include "CSparkonto.h"
#include "CPerson.h"

using namespace std;

class CGiroKunde : virtual public CPerson
{
   public:
      CGiroKonto gkonto;
      CGiroKunde();
      CGiroKunde(const string&, const string&, const string&);
      ~CGiroKunde() = default;
      
      friend std::ostream& operator<<(std::ostream& out, const CGiroKunde& k);
};

CGiroKunde::CGiroKunde():
   CPerson(),
   gkonto()
{
}

CGiroKunde::CGiroKunde(const string& vname, const string& nname, const string& gdatum):
   CPerson(vname, nname, gdatum),
   gkonto()
{
}

std::ostream& operator<<(std::ostream& out, const CGiroKunde& k)
{
   out << "GiroKunde: " << static_cast<const CPerson&>(k);
   return out;
}

class CSparer : virtual public CPerson
{
   public:
      CSparKonto skonto;
      CSparer();
      CSparer(const string&, const string&, const string&);
      ~CSparer() = default;
      
      friend std::ostream& operator<<(std::ostream& out, const CSparer& k);
};

CSparer::CSparer():
   CPerson(),
   skonto()
{
}

CSparer::CSparer(const string& vname, const string& nname, const string& gdatum):
   CPerson(vname, nname, gdatum),
   skonto()
{
}

std::ostream& operator<<(std::ostream& out, const CSparer& k)
{
   out << "Sparkunde: " << static_cast<const CPerson&>(k);
   return out;
}

class CKombi : public CGiroKunde,  public CSparer
{
   public:
      CKombi();
      CKombi(const string&, const string&, const string&);
      ~CKombi() = default;
};

CKombi::CKombi() : 
   CGiroKunde(),
   CSparer()
{
  cout << "Kombi default constructor" << endl;
}

CKombi::CKombi(const string& vname, const string& nname, const string& gdatum) :
   CGiroKunde(vname, nname, gdatum),
   CSparer(vname, nname, gdatum)
{
  cout << "Kombi constructor" << endl;
}

int main()
{
   CGiroKunde p = CGiroKunde("Foo", "Bar", "19.3.1984");
   p.gkonto.set_dispo_kredit(100);
   cout << p;
   
   CSparer s = CSparer("Foo2", "Bar2", "20.3.1984");
   cout << s;

   CKombi k = CKombi("Kombi", "NKombi", "31.12.1999");
   k.gkonto.set_dispo_kredit(200);
  
   cout << k.get_nname() << " " << k.gkonto.get_dispo_kredit() << endl;
   cout << static_cast<CGiroKunde&>(k);
   return 0;
}

