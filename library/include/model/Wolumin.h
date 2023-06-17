//
// Created by student on 08.06.23.
//
#ifndef OOPPROJECT_WOLUMIN_H
#define OOPPROJECT_WOLUMIN_H
#include "iostream"
#include "WoluminException.h"
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
class Wolumin
        {
protected:
            std::string wydawnictwo;
            std::string jezyk;
            std::string tytul;

public:
    Wolumin(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul);

    const std::string &getWydawnictwo() const;

    const std::string &getJezyk() const;

    const std::string &getTytul() const;

    void setWydawnictwo(const std::string &wydawnictwo);

    void setJezyk(const std::string &jezyk);

    void setTytul(const std::string &tytul);

    virtual std::string pobierz_informacje()=0;

    template<class Archive>
    void save(Archive & archive) const {
        archive(wydawnictwo, jezyk, tytul);
    }

    template<class Archive>
    void load(Archive & archive) {
        archive(wydawnictwo, jezyk, tytul);
    }
};
#endif //OOPPROJECT_WOLUMIN_H
