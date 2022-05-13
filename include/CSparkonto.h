#ifndef _CSPARKONTO_H_
#define _CSPARKONTO_H_

#include "CKonto.h"

using namespace std;

class CSparKonto : virtual public CKonto
{
   private:
      int dauer;
      double zinssatz;

   public:
      CSparKonto();
      ~CSparKonto() = default;

      int get_dauer() { return this->dauer; };
      void set_dauer(int d) { this->dauer = d; };

      double get_zinssatz() { return this->zinssatz; };
      void set_zinssatz(double);
};

#endif /* _CSPARKONTO_H_ */
