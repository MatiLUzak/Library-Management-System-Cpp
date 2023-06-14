//
// Created by student on 09.06.23.
//

#ifndef OOPPROJECT_WYPOZYCZENIE_H
#define OOPPROJECT_WYPOZYCZENIE_H
#include "Wypozycajacy.h"
#include "Wolumin.h"
#include <boost/date_time/local_time/local_time.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/string_generator.hpp>
#include "WypozyczenieException.h"
typedef boost::posix_time::ptime PTime;
typedef std::shared_ptr<Wypozycajacy> Wypozycajacy_Ptr;
typedef std::shared_ptr<Wolumin> Wolumin_Ptr;
class Wypozyczenie
        {
private:
    Wypozycajacy_Ptr Wypozycajacy;
    Wolumin_Ptr    Wolumin;
    boost::uuids::uuid UUID;
    PTime data_od;
    PTime data_do;
public:
    Wypozyczenie(const Wypozycajacy_Ptr &wypozycajacy, const Wolumin_Ptr &wolumin);

    const Wypozycajacy_Ptr &getWypozycajacy() const;

    const Wolumin_Ptr &getWolumin() const;

    const PTime &getDataOd() const;

    const PTime &getDataDo() const;

    void setWypozycajacy(const Wypozycajacy_Ptr &wypozycajacy);

    void setWolumin(const Wolumin_Ptr &wolumin);

    void koniec_wypoz();

    double dl_wypoz();

    const boost::uuids::uuid &getUuid() const;

    int oblicz_kare();
};
#endif //OOPPROJECT_WYPOZYCZENIE_H
