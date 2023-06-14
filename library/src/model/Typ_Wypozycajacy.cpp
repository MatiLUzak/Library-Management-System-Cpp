//
// Created by student on 05.06.23.
//
#include "model/Typ_Wypozycajacy.h"
#include "sstream"
Typ_Wypozycajacy::Typ_Wypozycajacy(double kara, int maxDlWypoz, int maksLKsiazek) : kara(kara),
                                                                                    max_dl_wypoz(maxDlWypoz),
                                                                                    maks_l_ksiazek(maksLKsiazek) {
    if(kara < 0) {
        throw WypozyczajacyException("Kara nie moze byc ujemna");
    }
    if(maxDlWypoz < 0) {
        throw WypozyczajacyException("MaxDlWypoz nie moze byc ujemne");
    }
    if(maksLKsiazek < 0) {
        throw WypozyczajacyException("MaksLKsiazek nie moze byc ujemne");
    }
}

double Typ_Wypozycajacy::getKara() const {
    return kara;
}

int Typ_Wypozycajacy::getMaxDlWypoz() const {
    return max_dl_wypoz;
}

int Typ_Wypozycajacy::getMaksLKsiazek() const {
    return maks_l_ksiazek;
}

void Typ_Wypozycajacy::setKara(double kara) {
    if(kara < 0) {
        throw WypozyczajacyException("Kara nie moze byc ujemna");
    }
    Typ_Wypozycajacy::kara = kara;
}

void Typ_Wypozycajacy::setMaxDlWypoz(int maxDlWypoz) {
    if(maxDlWypoz < 0) {
        throw WypozyczajacyException("MaxDlWypoz nie moze byc ujemne");
    }
    max_dl_wypoz = maxDlWypoz;
}

void Typ_Wypozycajacy::setMaksLKsiazek(int maksLKsiazek) {
    if(maksLKsiazek < 0) {
        throw WypozyczajacyException("MaksLKsiazek nie moze byc ujemne");
    }
    maks_l_ksiazek = maksLKsiazek;
}

/*std::string Typ_Wypozycajacy::Typ_Info() {
    std::stringstream info;

    info << "Kara: " << getKara() << "\n";
    info << "Max długość wypożyczenia: " << getMaxDlWypoz() << "\n";
    info << "Maksymalna liczba książek: " << getMaksLKsiazek() << "\n";

    return info.str();
}*/
