#ifndef BIBLIOTEKA_MATEUSZLUZAK_MACIEJ_KOWALSKI_TYP_WYPOZYCAJACY_H
#define BIBLIOTEKA_MATEUSZLUZAK_MACIEJ_KOWALSKI_TYP_WYPOZYCAJACY_H
#include "iostream"
#include "WypozyczajacyException.h"
class Typ_Wypozycajacy
{
protected:
    double kara;
    int max_dl_wypoz;
    int maks_l_ksiazek;
public:
    Typ_Wypozycajacy(double kara, int maxDlWypoz, int maksLKsiazek);

     double getKara() const;

     int getMaxDlWypoz() const;

     int getMaksLKsiazek() const;

     void setKara(double kara);

     void setMaxDlWypoz(int maxDlWypoz);

    virtual void setMaksLKsiazek(int maksLKsiazek);
    virtual std::string Typ_Info()=0;
};
#endif //BIBLIOTEKA_MATEUSZLUZAK_MACIEJ_KOWALSKI_TYP_WYPOZYCAJACY_H