#include <string>
#include "Pozostali.h"
#include "sstream"
//
// Created by student on 06.06.23.
//
Pozostali::Pozostali(double kara, int maxDlWypoz, int maksLKsiazek, const std::string &zawod)
        : Typ_Wypozycajacy(kara, maxDlWypoz, maksLKsiazek), zawod(zawod) {
    if(zawod.empty()) {
        throw WypozyczajacyException("Bladny zawod");
    }
}


const std::string &Pozostali::getZawod() const {
    return zawod;
}

void Pozostali::setZawod(const std::string &zawod) {
    if(zawod.empty()) {
        throw WypozyczajacyException("Bladny zawod");
    }
    Pozostali::zawod = zawod;
}
std::string Pozostali::Typ_Info() {
    std::stringstream info;

    info << "Kara: " << getKara() << "\n";
    info << "Max długość wypożyczenia: " << getMaxDlWypoz() << "\n";
    info << "Maksymalna liczba książek: " << getMaksLKsiazek() << "\n";
    info << "Zawod: " << getZawod() << "\n";

    return info.str();
}