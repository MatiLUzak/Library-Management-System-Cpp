//
// Created by student on 08.06.23.
//
#include "Czasopismo.h"
#include "sstream"

Czasopismo::Czasopismo(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul,
                       const std::string &nrWydania) : Wolumin(wydawnictwo, jezyk, tytul), nr_wydania(nrWydania) {}

const std::string &Czasopismo::getNrWydania() const {
    return nr_wydania;
}

void Czasopismo::setNrWydania(const std::string &nrWydania) {
    nr_wydania = nrWydania;
}

std::string Czasopismo::pobierz_informacje() {
    std::stringstream info;

    info << "Wydawnictow: " << getWydawnictwo() << "\n";
    info << "Jezyk: " << getJezyk() << "\n";
    info <<"tytul: " << getTytul() << "\n";
    info <<"nr_Wydania: " << getNrWydania() << "\n";

    return info.str();
}
