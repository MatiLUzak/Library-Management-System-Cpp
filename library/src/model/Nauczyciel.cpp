//
// Created by student on 06.06.23.
//
#include "Nauczyciel.h"
#include "sstream"

Nauczyciel::Nauczyciel(double kara, int maxDlWypoz, int maksLKsiazek, const std::string &tytul) : Typ_Wypozycajacy(kara,
                                                                                                                   maxDlWypoz,
                                                                                                                   maksLKsiazek),
                                                                                                  tytul(tytul) {
    if(tytul.empty()) {
        throw WypozyczajacyException("Bladny tytul");
    }
}

const std::string &Nauczyciel::getTytul() const {
    return tytul;
}

void Nauczyciel::setTytul(const std::string &tytul) {
    if(tytul.empty()) {
        throw WypozyczajacyException("Bladny tytul");
    }
    Nauczyciel::tytul = tytul;
}

std::string Nauczyciel::Typ_Info() {
    std::stringstream info;

    info << "Kara: " << getKara() << "\n";
    info << "Max długość wypożyczenia: " << getMaxDlWypoz() << "\n";
    info << "Maksymalna liczba książek: " << getMaksLKsiazek() << "\n";
    info << "Tytul: " << getTytul() << "\n";

    return info.str();
}
