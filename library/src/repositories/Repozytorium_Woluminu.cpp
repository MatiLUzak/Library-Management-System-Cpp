//
// Created by student on 09.06.23.
//
#include "Repozytorium_Woluminu.h"


void Repozytorium_Woluminu::dodajDoHistorycznych(WoluminPtr wolumin) {
    if(wolumin != nullptr) {
        historyczny_Wolumin.push_back(wolumin);
    }
}

const std::vector<WoluminPtr> &Repozytorium_Woluminu::getHistorycznyWolumin() const {
    return historyczny_Wolumin;
}
