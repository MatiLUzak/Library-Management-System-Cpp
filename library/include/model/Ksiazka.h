//
// Created by student on 08.06.23.
//

#ifndef OOPPROJECT_KSIAZKA_H
#define OOPPROJECT_KSIAZKA_H
#include "iostream"
#include "Wolumin.h"
#include "vector"
class Ksiazka:public Wolumin
        {
protected:
            std::vector<std::string> autor;
public:
    Ksiazka(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul,
            const std::vector<std::string> &autor);

    const std::vector<std::string> &getAutor() const;

    void setAutor(const std::vector<std::string> &autor);

    virtual std::string pobierz_informacje() override=0;
};
#endif //OOPPROJECT_KSIAZKA_H
