//
// Created by student on 08.06.23.
//
#include "Wypozycajacy.h"
#include "sstream"
Wypozycajacy::Wypozycajacy(const Typ_Wypozycajacy_Ptr &typWypozycajacy, const std::string &nazwa, const PTime &dataUr,
                           const std::string &adres) : Typ_Wypozycajacy(typWypozycajacy), nazwa(nazwa), data_ur(dataUr),
                                                       adres(adres)
                                                       {
                                                           UUID = boost::uuids::random_generator()();

                                                       }

const boost::uuids::uuid &Wypozycajacy::getUuid() const {
    return UUID;
}

const Typ_Wypozycajacy_Ptr &Wypozycajacy::getTypWypozycajacy() const {
    return Typ_Wypozycajacy;
}

const std::string &Wypozycajacy::getNazwa() const {
    return nazwa;
}

const PTime &Wypozycajacy::getDataUr() const {
    return data_ur;
}

const std::string &Wypozycajacy::getAdres() const {
    return adres;
}

void Wypozycajacy::setTypWypozycajacy(const Typ_Wypozycajacy_Ptr &typWypozycajacy) {
    Typ_Wypozycajacy = typWypozycajacy;
}

void Wypozycajacy::setNazwa(const std::string &nazwa) {
    Wypozycajacy::nazwa = nazwa;
}

void Wypozycajacy::setDataUr(const PTime &dataUr) {
    data_ur = dataUr;
}

void Wypozycajacy::setAdres(const std::string &adres) {
    Wypozycajacy::adres = adres;
}

const std::string Wypozycajacy::pobierz_inforacje_wyp() {
    std::stringstream info;

    info << "Nazwa: " << getNazwa() << "\n";
    info << "dataUr: " << getDataUr() << "\n";
    info <<"adres: " << getAdres() << "\n";
    if(Typ_Wypozycajacy != nullptr) {
        info << "Typ_wypo: " << Typ_Wypozycajacy->Typ_Info() << "\n";
    }
    return info.str();
}
