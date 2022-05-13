#ifndef _CGIROKONTO_H_
#define _CGIROKONTO_H_

#include "CKonto.h"

using namespace std;

class CGiroKonto : virtual public CKonto
{
   private:
      double dispo_kredit;
      double dispo_prozent;

   public:
      CGiroKonto();
      ~CGiroKonto() = default;

      double get_dispo_kredit() { return this->dispo_kredit; };
      void set_dispo_kredit(double k) { this->dispo_kredit = k; };

      double get_dispo_prozent() { return this->dispo_prozent; };
      void set_dispo_prozent(double p);

};

#endif /* _CGIROKONTO_H_ */
