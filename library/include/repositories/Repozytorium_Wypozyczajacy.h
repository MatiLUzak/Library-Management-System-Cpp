//
// Created by student on 09.06.23.
//

#ifndef OOPPROJECT_REPOZYTORIUM_WYPOZYCZAJACY_H
#define OOPPROJECT_REPOZYTORIUM_WYPOZYCZAJACY_H
#include "Wypozycajacy.h"
#include "Repozytorium.h"
typedef std::shared_ptr<Wypozycajacy> Wypozycajacy_Ptr;
class Repozytorium_Wypozyczajacy: public Repozytorium<Wypozycajacy>
        {
        private:
            std::vector<Wypozycajacy_Ptr> historyczni_wypozyczajacy;
        public:
            Wypozycajacy_Ptr Znajdz_po_ID_wypozyc(const boost::uuids::uuid& id) const;
            void dodaj_do_historyczni(Wypozycajacy_Ptr wypozycajacy);

        };
#endif //OOPPROJECT_REPOZYTORIUM_WYPOZYCZAJACY_H
