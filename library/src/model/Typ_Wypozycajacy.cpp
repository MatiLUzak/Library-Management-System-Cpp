//
// Created by student on 05.06.23.
//
#include "model/Typ_Wypozycajacy.h"
#include "sstream"
Typ_Wypozycajacy::Typ_Wypozycajacy(double kara, int maxDlWypoz, int maksLKsiazek) : kara(kara),
                                                                                    max_dl_wypoz(maxDlWypoz),
                                                                                    maks_l_ksiazek(maksLKsiazek) {}

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
    Typ_Wypozycajacy::kara = kara;
}

void Typ_Wypozycajacy::setMaxDlWypoz(int maxDlWypoz) {
    max_dl_wypoz = maxDlWypoz;
}

void Typ_Wypozycajacy::setMaksLKsiazek(int maksLKsiazek) {
    maks_l_ksiazek = maksLKsiazek;
}

/*std::string Typ_Wypozycajacy::Typ_Info() {
    std::stringstream info;

    info << "Kara: " << getKara() << "\n";
    info << "Max długość wypożyczenia: " << getMaxDlWypoz() << "\n";
    info << "Maksymalna liczba książek: " << getMaksLKsiazek() << "\n";

    return info.str();
}*/
