//
// Created by student on 06.06.23.
//
#include "Uczen.h"
#include "sstream"

Uczen::Uczen(double kara, int maxDlWypoz, int maksLKsiazek, const std::string &nrSemestru) : Typ_Wypozycajacy(kara,
                                                                                                              maxDlWypoz,
                                                                                                              maksLKsiazek),
                                                                                             nr_semestru(nrSemestru) {}

const std::string &Uczen::getNrSemestru() const {
    return nr_semestru;
}

void Uczen::setNrSemestru(const std::string &nrSemestru) {
    nr_semestru = nrSemestru;
}

std::string Uczen::Typ_Info() {
    std::stringstream info;

    info << "Kara: " << getKara() << "\n";
    info << "Max długość wypożyczenia: " << getMaxDlWypoz() << "\n";
    info << "Maksymalna liczba książek: " << getMaksLKsiazek() << "\n";
    info << "Nr_semestru: " << getNrSemestru() << "\n";
    return info.str();
}
