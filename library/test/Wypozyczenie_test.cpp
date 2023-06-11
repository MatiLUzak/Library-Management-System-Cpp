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

    BOOST_CHECK(wypozyczenie.getWypozycajacy() == wypozyczajacy);
    BOOST_CHECK(wypozyczenie.getWolumin() == wolumin);

    BOOST_CHECK(wypozyczenie.getDataDo().is_not_a_date_time());

    wypozyczenie.koniec_wypoz();
    BOOST_CHECK(!wypozyczenie.getDataDo().is_not_a_date_time());


}
    BOOST_AUTO_TEST_CASE(WypozycajacyTest)
    {
        auto typ = std::make_shared<Nauczyciel>(0.0, 30, 10, "Dr");
        std::string nazwa = "Jan Kowalski";
        PTime data_ur = boost::posix_time::time_from_string("2023-05-01 00:00:00");
        std::string adres = "Warszawa";

        Wypozycajacy wypozycajacy(typ, nazwa, data_ur, adres);

        BOOST_CHECK(wypozycajacy.getTypWypozycajacy() == typ);
        BOOST_CHECK(wypozycajacy.getNazwa() == nazwa);
        BOOST_CHECK(wypozycajacy.getDataUr() == data_ur);
        BOOST_CHECK(wypozycajacy.getAdres() == adres);
    }
    BOOST_AUTO_TEST_CASE(BeletrystykaTest)
    {
        std::string wydawnictwo = "Helion";
        std::string jezyk = "PL";
        std::string tytul = "Harry Potter";
        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        std::string przedzialWiekowy = "15+";
        std::string rodzaj = "Fantasy";

        Beletrystyka beletrystyka(wydawnictwo, jezyk, tytul, autor, przedzialWiekowy, rodzaj);

        BOOST_CHECK(beletrystyka.getWydawnictwo() == wydawnictwo);
        BOOST_CHECK(beletrystyka.getJezyk() == jezyk);
        BOOST_CHECK(beletrystyka.getTytul() == tytul);
        BOOST_CHECK(beletrystyka.getAutor() == autor);
        BOOST_CHECK(beletrystyka.getPrzedziałWiekowy() == przedzialWiekowy);
        BOOST_CHECK(beletrystyka.getRodzaj() == rodzaj);
    }

BOOST_AUTO_TEST_SUITE_END()