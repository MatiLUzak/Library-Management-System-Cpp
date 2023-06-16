//
// Created by student on 10.06.23.
//

#ifndef OOPPROJECT_ZARZADCA_WYPOZYCZENIA_H
#define OOPPROJECT_ZARZADCA_WYPOZYCZENIA_H
#include "Repozytorium_Wypozyczenia.h"
class Zarzadca_Wypozyczenia
        {
private:
            Repozytorium_Wypozyczenia repozytorium;
public:
    void dodajWypozyczenie(WypozyczeniePtr wypozyczenie);
    void usunWypozyczenie(WypozyczeniePtr wypozyczenie);
    template<typename Predicate>
    std::vector<WypozyczeniePtr>znajdzWypozyczenie(Predicate matchingMethod) {
        return repozytorium.Znajdz(matchingMethod);
    }
    std::vector<WypozyczeniePtr> znajdzWszystkieWypozyczenia() {
        return repozytorium.Znajdz_wsz();
    }
    double obliczKare(WypozyczeniePtr wypozyczenie);
        };
#endif //OOPPROJECT_ZARZADCA_WYPOZYCZENIA_H
