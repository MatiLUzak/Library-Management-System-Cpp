//
// Created by student on 09.06.23.
//

#ifndef OOPPROJECT_REPOZYTORIUM_WYPOZYCZENIA_H
#define OOPPROJECT_REPOZYTORIUM_WYPOZYCZENIA_H
#include "Repozytorium.h"
#include "Wypozyczenie.h"
typedef std::shared_ptr<Wypozyczenie> WypozyczeniePtr;
class Repozytorium_Wypozyczenia:public Repozytorium<Wypozyczenie>
        {
private:
            std::vector<WypozyczeniePtr> historyczne_wypoz;
public:
            WypozyczeniePtr Znajdz_po_ID_wypoz(const boost::uuids::uuid& id)  const;
            void dodaj_do_historyczne_wypoz(WypozyczeniePtr wypozyczenie);

    const std::vector<WypozyczeniePtr> &getHistoryczneWypoz() const;
};
#endif //OOPPROJECT_REPOZYTORIUM_WYPOZYCZENIA_H
