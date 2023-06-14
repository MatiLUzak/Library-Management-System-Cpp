//
// Created by student on 08.06.23.
//
#include "Wolumin.h"
#include "sstream"
Wolumin::Wolumin(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul) : wydawnictwo(
        wydawnictwo), jezyk(jezyk), tytul(tytul) {
    if(wydawnictwo.empty()){
        throw WoluminException("Błędne wydawnictwo");
    }
    if(jezyk.empty()){
        throw WoluminException("Błędny język");
    }
    if(tytul.empty()){
        throw WoluminException("Błędny tytuł");
    }
}

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
    if(wydawnictwo.empty()){
        throw WoluminException("Błędne wydawnictwo");
    }
    Wolumin::wydawnictwo = wydawnictwo;
}

void Wolumin::setJezyk(const std::string &jezyk) {
    if(jezyk.empty()){
        throw WoluminException("Błędny język");
    }
    Wolumin::jezyk = jezyk;
}

void Wolumin::setTytul(const std::string &tytul) {
    if(tytul.empty()){
        throw WoluminException("Błędny tytuł");
    }
    Wolumin::tytul = tytul;
}
