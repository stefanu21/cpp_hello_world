#ifndef _CKONTO_H_
#define _CKONTO_H_
using namespace std;

class CKonto
{
   private:
      double konto;

   public:
      CKonto();
      ~CKonto() = default;

      void einzahlen(double);
      bool abheben(double);
};

#endif /* _CKONTO_H_ */
