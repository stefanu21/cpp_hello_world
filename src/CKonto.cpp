#include "CKonto.h"

CKonto::CKonto():
   konto(0.0)
{
}

void CKonto::einzahlen(double betrag)
{
   this->konto += betrag;
}

bool CKonto::abheben(double betrag)
{
   if(betrag > this->konto)
      return false;

   this->konto -= betrag;
   return true;
}

