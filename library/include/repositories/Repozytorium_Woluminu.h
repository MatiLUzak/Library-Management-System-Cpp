//
// Created by student on 09.06.23.
//

#ifndef OOPPROJECT_REPOZYTORIUM_WOLUMINU_H
#define OOPPROJECT_REPOZYTORIUM_WOLUMINU_H
#include "Wolumin.h"
#include "Repozytorium.h"
typedef std::shared_ptr<Wolumin> WoluminPtr;
class Repozytorium_Woluminu:public Repozytorium<Wolumin>
        {
private:
            std::vector<WoluminPtr> historyczny_Wolumin;
        public:
    void dodajDoHistorycznych(WoluminPtr wolumin);

};
#endif //OOPPROJECT_REPOZYTORIUM_WOLUMINU_H
