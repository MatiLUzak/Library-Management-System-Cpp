//
// Created by student on 06.06.23.
//

#ifndef OOPPROJECT_NAUCZYCIEL_H
#define OOPPROJECT_NAUCZYCIEL_H
#include "Typ_Wypozycajacy.h"
class Nauczyciel: public Typ_Wypozycajacy
        {
private:
            std::string tytul;
public:
    Nauczyciel(double kara, int maxDlWypoz, int maksLKsiazek, const std::string &tytul);

    const std::string &getTytul() const;

    void setTytul(const std::string &tytul);

    std::string Typ_Info() override;
};
#endif //OOPPROJECT_NAUCZYCIEL_H
