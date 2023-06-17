//
// Created by student on 17.06.23.
//
#include <boost/test/unit_test.hpp>
#include "Repozytorium_Wypozyczajacy.h"
#include "Nauczyciel.h"
BOOST_AUTO_TEST_SUITE(RepozytoriumWypozyczajacySuiteCorrect)

BOOST_AUTO_TEST_CASE(RepozytoriumWypozyczajacyTest)
        {
                auto repo = std::make_shared<Repozytorium_Wypozyczajacy>();

        auto nauczycielTyp = std::make_shared<Nauczyciel>(1.0, 7, 3, "Dr");
        auto dataUr = boost::posix_time::second_clock::local_time();
        auto wypozycajacy = std::make_shared<Wypozycajacy>(nauczycielTyp, "Jan Kowalski", dataUr, "ul. Kwiatowa 5, 00-000 Warszawa");

        repo->dodaj_do_historyczni(wypozycajacy);
        BOOST_CHECK_EQUAL(repo->getHistoryczniWypozyczajacy().size(), 1);
        }

BOOST_AUTO_TEST_CASE(ZnajdzPoIdTest)
        {
                auto repo = std::make_shared<Repozytorium_Wypozyczajacy>();

        auto nauczycielTyp = std::make_shared<Nauczyciel>(1.0, 7, 3, "Dr");
        auto dataUr = boost::posix_time::second_clock::local_time();
        auto wypozycajacy = std::make_shared<Wypozycajacy>(nauczycielTyp, "Jan Kowalski", dataUr, "ul. Kwiatowa 5, 00-000 Warszawa");

        repo->dodaj(wypozycajacy);
        auto id = wypozycajacy->getUuid();
        auto found = repo->Znajdz_po_ID_wypozyc(id);

        BOOST_CHECK_EQUAL(found->getNazwa(), "Jan Kowalski");
        }

BOOST_AUTO_TEST_SUITE_END()
