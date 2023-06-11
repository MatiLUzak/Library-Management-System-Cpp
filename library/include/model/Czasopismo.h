//
// Created by student on 08.06.23.
//

#ifndef OOPPROJECT_CZASOPISMO_H
#define OOPPROJECT_CZASOPISMO_H
#include "Wolumin.h"
#include "iostream"
class Czasopismo:public Wolumin
        {
private:
    std::string nr_wydania;
public:
    Czasopismo(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul,
               const std::string &nrWydania);

    const std::string &getNrWydania() const;

    void setNrWydania(const std::string &nrWydania);

    std::string pobierz_informacje() override;
};
#endif //OOPPROJECT_CZASOPISMO_H
