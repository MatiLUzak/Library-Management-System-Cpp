//
// Created by student on 10.06.23.
//
#include "Zarzadca_Woluminu.h"
void Zarzadca_Woluminu::dodajWolumin(WoluminPtr wolumin) {
    repozytorium.dodaj(wolumin);
}

void Zarzadca_Woluminu::usunWolumin(WoluminPtr wolumin) {
    if (wolumin == nullptr) return;
    repozytorium.dodajDoHistorycznych(wolumin);
    repozytorium.usun(wolumin);
}