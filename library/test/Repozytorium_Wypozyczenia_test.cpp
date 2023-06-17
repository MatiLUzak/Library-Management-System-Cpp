
// Created by student on 17.06.23.
//
#include <boost/test/unit_test.hpp>
#include "Repozytorium_Wypozyczenia.h"
#include "Nauczyciel.h"
#include "Wypozycajacy.h"
#include "Naukowa.h"

BOOST_AUTO_TEST_SUITE(RepozytoriumWypozyczeniaSuiteCorrect)

    BOOST_AUTO_TEST_CASE(RepozytoriumWypozyczeniaTest)
    {
        auto repo = std::make_shared<Repozytorium_Wypozyczenia>();

        auto nauczycielTyp = std::make_shared<Nauczyciel>(1.0, 7, 3, "Dr");
        auto dataUr = boost::posix_time::second_clock::local_time();
        auto nauczyciel = std::make_shared<Wypozycajacy>(nauczycielTyp, "Jan Kowalski", dataUr, "ul. Kwiatowa 5, 00-000 Warszawa");

        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        auto wolumin1 = std::make_shared<Naukowa>("Helion", "PL", "Advanced AI", autor, "18+", "Computer Science");

        auto wypozyczenie1 = std::make_shared<Wypozyczenie>(nauczyciel, wolumin1);

        repo->dodaj_do_historyczne_wypoz(wypozyczenie1);
        BOOST_CHECK_EQUAL(repo->getHistoryczneWypoz().size(), 1);
    }
    BOOST_AUTO_TEST_CASE(RepozytoriumWypozyczeniaFindByIDTest)
    {
        auto repo = std::make_shared<Repozytorium_Wypozyczenia>();

        auto nauczycielTyp = std::make_shared<Nauczyciel>(1.0, 7, 3, "Dr");
        auto dataUr = boost::posix_time::second_clock::local_time();
        auto nauczyciel = std::make_shared<Wypozycajacy>(nauczycielTyp, "Jan Kowalski", dataUr, "ul. Kwiatowa 5, 00-000 Warszawa");

        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        auto wolumin1 = std::make_shared<Naukowa>("Helion", "PL", "Advanced AI", autor, "18+", "Computer Science");

        auto wypozyczenie1 = std::make_shared<Wypozyczenie>(nauczyciel, wolumin1);
        auto wypozyczenie2 = std::make_shared<Wypozyczenie>(nauczyciel, wolumin1);

        auto id1 = wypozyczenie1->getUuid();
        auto id2 = wypozyczenie2->getUuid();

        repo->dodaj(wypozyczenie1);
        repo->dodaj(wypozyczenie2);

        BOOST_CHECK_EQUAL(repo->Znajdz_po_ID_wypoz(id1), wypozyczenie1);
        BOOST_CHECK_EQUAL(repo->Znajdz_po_ID_wypoz(id2), wypozyczenie2);
    }
BOOST_AUTO_TEST_SUITE_END()
