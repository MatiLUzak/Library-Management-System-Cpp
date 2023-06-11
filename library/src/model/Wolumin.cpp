//
// Created by student on 08.06.23.
//
#include "Wolumin.h"
#include "sstream"

Wolumin::Wolumin(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul) : wydawnictwo(
        wydawnictwo), jezyk(jezyk), tytul(tytul) {}

const std::string &Wolumin::getWydawnictwo() const {
    return wydawnictwo;
}

const std::string &Wolumin::getJezyk() const {
    return jezyk;
}

const std::string &Wolumin::getTytul() const {
    return tytul;
}

void Wolumin::setWydawnictwo(const std::string &wydawnictwo) {
    Wolumin::wydawnictwo = wydawnictwo;
}

void Wolumin::setJezyk(const std::string &jezyk) {
    Wolumin::jezyk = jezyk;
}

void Wolumin::setTytul(const std::string &tytul) {
    Wolumin::tytul = tytul;
}
