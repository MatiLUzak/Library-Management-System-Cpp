//
// Created by student on 09.06.23.
//
#include "Wypozyczenie.h"
#include "sstream"

Wypozyczenie::Wypozyczenie(const Wypozycajacy_Ptr &wypozycajacy, const Wolumin_Ptr &wolumin) : Wypozycajacy(
        wypozycajacy), Wolumin(wolumin)
        {
            data_od = boost::posix_time::second_clock::local_time();
            UUID = boost::uuids::random_generator()();
            if(wypozycajacy== nullptr){ throw ParameterException ("Blendny wypozycajacy");}
            if(wolumin== nullptr){ throw ParameterException ("Blendny wolumin");}
        }

const Wypozycajacy_Ptr &Wypozyczenie::getWypozycajacy() const {
    return Wypozycajacy;
}

const Wolumin_Ptr &Wypozyczenie::getWolumin() const {
    return Wolumin;
}

const PTime &Wypozyczenie::getDataOd() const {
    return data_od;
}

const PTime &Wypozyczenie::getDataDo() const {
    return data_do;
}

void Wypozyczenie::setWypozycajacy(const Wypozycajacy_Ptr &wypozycajacy) {
    Wypozycajacy = wypozycajacy;
}

void Wypozyczenie::setWolumin(const Wolumin_Ptr &wolumin) {
    Wolumin = wolumin;
}

void Wypozyczenie::koniec_wypoz() {
    data_do = boost::posix_time::second_clock::local_time();
}

double Wypozyczenie::dl_wypoz() {
    boost::posix_time::time_duration roznica = data_do - data_od;
    return roznica.total_seconds() / (60.0*60.0*24.0);
}

int Wypozyczenie::oblicz_kare() {
    int kara;
    kara=(Wypozycajacy->getTypWypozycajacy()->getKara())*dl_wypoz();
    return kara;
}

const boost::uuids::uuid &Wypozyczenie::getUuid() const {
    return UUID;
}
