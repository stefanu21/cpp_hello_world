#ifndef _CPERSON_H_
#define _CPERSON_H_

#include <string>
#include <iostream>

using namespace std;

class CPerson
{
   private:
      string nname;
      string vname;
      string gdatum;

   public:
      CPerson();
      CPerson(const string&, const string&, const string&);
      ~CPerson() = default;

      string get_nname() { return this->nname; };
      void set_nname(const string& nname) { this->nname = nname; };

      string get_vname() { return this->vname; };
      void set_vname(const string& vname) { this->vname = vname; };

      string get_gdatum() { return this->gdatum; };
      void set_gdatum(const string& gdatum) { this->gdatum = gdatum; };

      friend std::ostream& operator<<(std::ostream& out, const CPerson& p);
};




#endif /* _CPERSON_H_ */
