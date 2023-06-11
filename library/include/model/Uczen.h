//
// Created by student on 06.06.23.
//

#ifndef OOPPROJECT_UCZEN_H
#define OOPPROJECT_UCZEN_H
#include "Typ_Wypozycajacy.h"
class Uczen:public Typ_Wypozycajacy
        {
private:
            std::string nr_semestru;
public:
    Uczen(double kara, int maxDlWypoz, int maksLKsiazek, const std::string &nrSemestru);

    const std::string &getNrSemestru() const;

    void setNrSemestru(const std::string &nrSemestru);

    std::string Typ_Info() override;
};
#endif //OOPPROJECT_UCZEN_H
