//
// Created by student on 09.06.23.
//
#include "Wypozyczenie.h"
#include "Nauczyciel.h"
#include "Beletrystyka.h"
#include <boost/test/unit_test.hpp>
#include <memory>
#include "vector"

BOOST_AUTO_TEST_SUITE(WypozyczenieSuiteCorrect)

BOOST_AUTO_TEST_CASE(WypozyczenieTest)
{
    std::vector<std::string> autor;
    autor.push_back("J.K. Rowling");
    auto wypozyczajacy = std::make_shared<Wypozycajacy>(std::make_shared<Nauczyciel>(0.0, 30, 10, "Dr"), "Jan Kowalski", boost::posix_time::time_from_string("2023-05-01 00:00:00"), "Warszawa");
    auto wolumin = std::make_shared<Beletrystyka>("Helion", "PL", "Harry Potter", autor, "15+", "Fantasy");

    Wypozyczenie wypozyczenie(wypozyczajacy, wolumin);
    BOOST_CHECK(wypozyczenie.getDataOd() == boost::posix_time::second_clock::local_time());
    BOOST_CHECK(wypozyczenie.getDataDo().is_not_a_date_time());

    wypozyczenie.koniec_wypoz();
    BOOST_CHECK(!wypozyczenie.getDataDo().is_not_a_date_time());

    BOOST_CHECK(!wypozyczenie.getUuid().is_nil());

    auto nowy_wypozyczajacy = std::make_shared<Wypozycajacy>(std::make_shared<Nauczyciel>(0.0, 30, 10, "Prof"), "Adam Nowak", boost::posix_time::time_from_string("2023-05-01 00:00:00"), "Kraków");
    wypozyczenie.setWypozycajacy(nowy_wypozyczajacy);
    BOOST_CHECK_EQUAL(wypozyczenie.getWypozycajacy(), nowy_wypozyczajacy);

    auto nowy_wolumin = std::make_shared<Beletrystyka>("Helion", "PL", "Lord of the Rings", autor, "15+", "Fantasy");
    wypozyczenie.setWolumin(nowy_wolumin);
    BOOST_CHECK_EQUAL(wypozyczenie.getWolumin(), nowy_wolumin);

    BOOST_CHECK_EQUAL(wypozyczenie.dl_wypoz(), 0);
    BOOST_CHECK_EQUAL(wypozyczenie.oblicz_kare(), 0);
}
    BOOST_AUTO_TEST_CASE(WypozyczenieExceptionsTest)
    {
        auto wypozyczajacy = std::make_shared<Wypozycajacy>(std::make_shared<Nauczyciel>(0.0, 30, 10, "Dr"), "Jan Kowalski", boost::posix_time::time_from_string("2023-05-01 00:00:00"), "Warszawa");
        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        auto wolumin = std::make_shared<Beletrystyka>("Helion", "PL", "Harry Potter", autor, "15+", "Fantasy");

        BOOST_CHECK_THROW(Wypozyczenie wypozyczenie(nullptr, wolumin), WypozyczenieException);
        BOOST_CHECK_THROW(Wypozyczenie wypozyczenie(wypozyczajacy, nullptr), WypozyczenieException);

        Wypozyczenie wypozyczenie(wypozyczajacy, wolumin);
        BOOST_CHECK_THROW(wypozyczenie.setWypozycajacy(nullptr), WypozyczenieException);
        BOOST_CHECK_THROW(wypozyczenie.setWolumin(nullptr), WypozyczenieException);
    }

BOOST_AUTO_TEST_SUITE_END()