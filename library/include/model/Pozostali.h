//
// Created by student on 06.06.23.
//

#ifndef OOPPROJECT_POZOSTALI_H
#define OOPPROJECT_POZOSTALI_H
#include "Typ_Wypozycajacy.h"
class Pozostali: public Typ_Wypozycajacy
        {
private:
            std::string zawod;
public:
    Pozostali(double kara, int maxDlWypoz, int maksLKsiazek, const std::string &zawod);

    void setZawod(const std::string &zawod);

    const std::string &getZawod() const;

    std::string Typ_Info() override;
};
#endif //OOPPROJECT_POZOSTALI_H
