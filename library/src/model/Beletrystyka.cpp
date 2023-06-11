#include "Beletrystyka.h"
#include "sstream"
//
// Created by student on 08.06.23.
//
Beletrystyka::Beletrystyka(const std::string &wydawnictwo,
                           const std::string &jezyk, const std::string &tytul,
                           const std::vector <std::string> &autor,
                           const std::string &przedziałWiekowy,
                           const std::string &rodzaj) : Ksiazka(wydawnictwo, jezyk, tytul, autor),
                                                                             przedział_wiekowy(przedziałWiekowy),
                                                                             rodzaj(rodzaj) {}

const std::string &Beletrystyka::getPrzedziałWiekowy() const {
    return przedział_wiekowy;
}

const std::string &Beletrystyka::getRodzaj() const {
    return rodzaj;
}

void Beletrystyka::setPrzedziałWiekowy(const std::string &przedziałWiekowy) {
    przedział_wiekowy = przedziałWiekowy;
}

void Beletrystyka::setRodzaj(const std::string &rodzaj) {
    Beletrystyka::rodzaj = rodzaj;
}

std::string Beletrystyka::pobierz_informacje() {
    std::stringstream info;

    info << "Wydawnictow: " << getWydawnictwo() << "\n";
    info << "Jezyk: " << getJezyk() << "\n";
    info <<"tytul: " << getTytul() << "\n";
    info <<"przedział_wiekowy: " << getPrzedziałWiekowy() << "\n";
    info <<"rodzaj: " << getRodzaj() << "\n";
    info << "Autorzy: ";
    for(const auto& autor : getAutor()) {
        info << autor << ", ";
    }
    info << "\n";
    return info.str();
}
