#include "Naukowa.h"
#include "sstream"

//
// Created by student on 08.06.23.
//
Naukowa::Naukowa(const std::string &wydawnictwo, const std::string &jezyk,
                 const std::string &tytul, const std::vector <std::string> &autor,
                 const std::string &recenzja, const std::string &dział)
        : Ksiazka(wydawnictwo, jezyk, tytul, autor), recenzja(recenzja), dział(dział) {}

const std::string &Naukowa::getRecenzja() const {
    return recenzja;
}

const std::string &Naukowa::getDział() const {
    return dział;
}

void Naukowa::setRecenzja(const std::string &recenzja) {
    Naukowa::recenzja = recenzja;
}

void Naukowa::setDział(const std::string &dział) {
    Naukowa::dział = dział;
}

std::string Naukowa::pobierz_informacje() {
    std::stringstream info;
    info << "Wydawnictow: " << getWydawnictwo() << "\n";
    info << "Jezyk: " << getJezyk() << "\n";
    info <<"tytul: " << getTytul() << "\n";
    info <<"recenzja: " << getRecenzja() << "\n";
    info <<"dział: " << getDział() << "\n";
    info << "Autorzy: ";
    for(const auto& autor : getAutor()) {
        info << autor << ", ";
    }
    info << "\n";
    return info.str();
}
