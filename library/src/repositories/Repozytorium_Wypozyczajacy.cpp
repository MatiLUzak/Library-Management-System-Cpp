//
// Created by student on 09.06.23.
//
#include "Repozytorium_Wypozyczajacy.h"

Wypozycajacy_Ptr Repozytorium_Wypozyczajacy::Znajdz_po_ID_wypozyc(const boost::uuids::uuid &id) const {
    return Znajdz_po_ID<boost::uuids::uuid>(id);
}

void Repozytorium_Wypozyczajacy::dodaj_do_historyczni(Wypozycajacy_Ptr wypozycajacy) {
    if(wypozycajacy != nullptr) {
        historyczni_wypozyczajacy.push_back(wypozycajacy);
    }
}

