//
// Created by student on 10.06.23.
//
#include <boost/test/unit_test.hpp>
#include "Zarzadca_Wyporzycajacy.h"
#include "Nauczyciel.h"
#include "Wypozycajacy.h"

BOOST_AUTO_TEST_SUITE(ZarzadcaWypozyczajacyTestSuite)

    BOOST_AUTO_TEST_CASE(ZarzadcaWypozyczajacyAddAndRemoveTest) {
        Zarzadca_Wypozyczajacy zarzadca;
        auto nauczycielTyp = std::make_shared<Nauczyciel>(1.0, 7, 3, "Dr");
        auto dataUr = boost::posix_time::second_clock::local_time();
        auto nauczyciel = std::make_shared<Wypozycajacy>(nauczycielTyp, "Jan Kowalski", dataUr, "ul. Kwiatowa 5, 00-000 Warszawa");

        BOOST_CHECK_EQUAL(zarzadca.znajdzWszystkichWypozyczajacy().size(), 0);

        zarzadca.dodajWypozyczajacy(nauczyciel);
        BOOST_CHECK_EQUAL(zarzadca.znajdzWszystkichWypozyczajacy().size(), 1);

        zarzadca.usunWypozyczajacy(nauczyciel);
        BOOST_CHECK_EQUAL(zarzadca.znajdzWszystkichWypozyczajacy().size(), 0);
    }
    BOOST_AUTO_TEST_CASE(ZarzadcaWypozyczajacyFindByNameTest) {
        Zarzadca_Wypozyczajacy zarzadca;
        auto nauczycielTyp = std::make_shared<Nauczyciel>(1.0, 7, 3, "Dr");
        auto dataUr = boost::posix_time::second_clock::local_time();
        auto nauczyciel1 = std::make_shared<Wypozycajacy>(nauczycielTyp, "Jan Kowalski", dataUr, "ul. Kwiatowa 5, 00-000 Warszawa");
        auto nauczyciel2 = std::make_shared<Wypozycajacy>(nauczycielTyp, "Adam Nowak", dataUr, "ul. Słoneczna 7, 00-001 Warszawa");

        zarzadca.dodajWypozyczajacy(nauczyciel1);
        zarzadca.dodajWypozyczajacy(nauczyciel2);

        auto found = zarzadca.znajdzWypozyczajacy([](const Wypozycajacy_Ptr& w) { return w->getNazwa() == "Jan Kowalski"; });
        BOOST_CHECK_EQUAL(found.size(), 1);
        BOOST_CHECK_EQUAL(found[0]->getNazwa(), "Jan Kowalski");
    }
    BOOST_AUTO_TEST_CASE(ExceptionTest)
    {
        Zarzadca_Wypozyczajacy zarzadca;
        BOOST_CHECK_THROW(zarzadca.dodajWypozyczajacy(nullptr), RepozytoriumException);
        BOOST_CHECK_THROW(zarzadca.usunWypozyczajacy(nullptr), RepozytoriumException);
    }
BOOST_AUTO_TEST_SUITE_END()
