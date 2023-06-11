//
// Created by student on 08.06.23.
//

#ifndef OOPPROJECT_WYPOZYCAJACY_H
#define OOPPROJECT_WYPOZYCAJACY_H
#include "Typ_Wypozycajacy.h"
#include "iostream"
#include "memory"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/string_generator.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/uuid/random_generator.hpp>
typedef boost::posix_time::ptime PTime;
typedef std::shared_ptr<Typ_Wypozycajacy> Typ_Wypozycajacy_Ptr;
class Wypozycajacy
        {
private:
            Typ_Wypozycajacy_Ptr Typ_Wypozycajacy;
            boost::uuids::uuid UUID;
            std::string nazwa;
            PTime data_ur;
            std::string adres;
public:
    Wypozycajacy(const Typ_Wypozycajacy_Ptr &typWypozycajacy, const std::string &nazwa, const PTime &dataUr,
                 const std::string &adres);

    const boost::uuids::uuid &getUuid() const;

    const Typ_Wypozycajacy_Ptr &getTypWypozycajacy() const;

    const std::string &getNazwa() const;

    const PTime &getDataUr() const;

    const std::string &getAdres() const;

    void setTypWypozycajacy(const Typ_Wypozycajacy_Ptr &typWypozycajacy);

    void setNazwa(const std::string &nazwa);

    void setDataUr(const PTime &dataUr);

    void setAdres(const std::string &adres);

    const std::string pobierz_inforacje_wyp();
};
#endif //OOPPROJECT_WYPOZYCAJACY_H
