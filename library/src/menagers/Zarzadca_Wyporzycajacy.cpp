//
// Created by student on 10.06.23.
//
#include "Zarzadca_Wyporzycajacy.h"

void Zarzadca_Wypozyczajacy::dodajWypozyczajacy(Wypozycajacy_Ptr wypozycajacy) {
repozytorium.dodaj(wypozycajacy);
}

void Zarzadca_Wypozyczajacy::usunWypozyczajacy(Wypozycajacy_Ptr wypozycajacy) {
    repozytorium.dodaj_do_historyczni(wypozycajacy);
repozytorium.usun(wypozycajacy);
}

