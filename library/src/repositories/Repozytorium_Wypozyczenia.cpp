//
// Created by student on 09.06.23.
//
#include "Repozytorium_Wypozyczenia.h"
WypozyczeniePtr Repozytorium_Wypozyczenia::Znajdz_po_ID_wypoz(const boost::uuids::uuid &id) const {
    return Znajdz_po_ID<boost::uuids::uuid>(id);
}

void Repozytorium_Wypozyczenia::dodaj_do_historyczne_wypoz(WypozyczeniePtr wypozyczenie) {
    if (wypozyczenie != nullptr) {
        historyczne_wypoz.push_back(wypozyczenie);
    }
}

const std::vector<WypozyczeniePtr> &Repozytorium_Wypozyczenia::getHistoryczneWypoz() const {
    return historyczne_wypoz;
}
