//
// Created by student on 10.06.23.
//

#ifndef OOPPROJECT_ZARZADCA_WOLUMINU_H
#define OOPPROJECT_ZARZADCA_WOLUMINU_H
#include "Repozytorium_Woluminu.h"
class Zarzadca_Woluminu
{
private:
    Repozytorium_Woluminu repozytorium;
public:
    void dodajWolumin(WoluminPtr wolumin);
    void usunWolumin(WoluminPtr wolumin);
    template<typename Predicate>
    std::vector<WoluminPtr>znajdzWoluminy(Predicate matchingMethod) {
        return repozytorium.Znajdz(matchingMethod);
    }
    std::vector<WoluminPtr> znajdzWszystkieWoluminy() {
        return repozytorium.Znajdz_wsz();
    }
};
#endif //OOPPROJECT_ZARZADCA_WOLUMINU_H
