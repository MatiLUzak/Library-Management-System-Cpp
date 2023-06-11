//
// Created by student on 08.06.23.
//

#ifndef OOPPROJECT_BELETRYSTYKA_H
#define OOPPROJECT_BELETRYSTYKA_H
#include "Ksiazka.h"
#include "iostream"
class Beletrystyka:public Ksiazka
        {
private:
            std::string przedział_wiekowy;
            std::string rodzaj;
public:
    Beletrystyka(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul,
                 const std::vector<std::string> &autor, const std::string &przedziałWiekowy, const std::string &rodzaj);

    const std::string &getPrzedziałWiekowy() const;

    const std::string &getRodzaj() const;

    void setPrzedziałWiekowy(const std::string &przedziałWiekowy);

    void setRodzaj(const std::string &rodzaj);

    std::string pobierz_informacje() override;
};
#endif //OOPPROJECT_BELETRYSTYKA_H
