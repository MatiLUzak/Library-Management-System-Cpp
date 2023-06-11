//
// Created by student on 10.06.23.
//

#ifndef OOPPROJECT_ZARZADCA_WYPORZYCAJACY_H
#define OOPPROJECT_ZARZADCA_WYPORZYCAJACY_H
#include "Repozytorium_Wypozyczajacy.h"
class Zarzadca_Wypozyczajacy
        {
        private:
    Repozytorium_Wypozyczajacy repozytorium;
        public:
    void dodajWypozyczajacy(Wypozycajacy_Ptr wypozycajacy);
    void usunWypozyczajacy(Wypozycajacy_Ptr wypozycajacy);
    template<typename Predicate>
    std::vector<Wypozycajacy_Ptr>znajdzWypozyczajacy(Predicate matchingMethod) {
        return repozytorium.Znajdz(matchingMethod);
    }
    std::vector<Wypozycajacy_Ptr> znajdzWszystkichWypozyczajacy() {
        return repozytorium.Znajdz_wsz();
    }
        };
#endif //OOPPROJECT_ZARZADCA_WYPORZYCAJACY_H
