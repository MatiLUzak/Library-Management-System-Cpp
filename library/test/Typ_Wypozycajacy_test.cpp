

#include <boost/test/unit_test.hpp>
#include "Uczen.h"
#include "Nauczyciel.h"
#include "Pozostali.h"

BOOST_AUTO_TEST_SUITE(Typ_WypozycajacySuiteCorrect)

    BOOST_AUTO_TEST_CASE(UczenCase)
    {
        Uczen uczen(1.0, 14, 5, "1");
        BOOST_CHECK_EQUAL(uczen.getKara(), 1.0);
        BOOST_CHECK_EQUAL(uczen.getMaxDlWypoz(), 14);
        BOOST_CHECK_EQUAL(uczen.getMaksLKsiazek(), 5);
        BOOST_CHECK_EQUAL(uczen.getNrSemestru(), "1");

        uczen.setKara(1.5);
        uczen.setMaxDlWypoz(16);
        uczen.setMaksLKsiazek(6);
        uczen.setNrSemestru("2");

        BOOST_CHECK_EQUAL(uczen.getKara(), 1.5);
        BOOST_CHECK_EQUAL(uczen.getMaxDlWypoz(), 16);
        BOOST_CHECK_EQUAL(uczen.getMaksLKsiazek(), 6);
        BOOST_CHECK_EQUAL(uczen.getNrSemestru(), "2");
    }

    BOOST_AUTO_TEST_CASE(NauczycielCase)
    {
        Nauczyciel nauczyciel(2.0, 30, 10, "dr");
        BOOST_CHECK_EQUAL(nauczyciel.getKara(), 2.0);
        BOOST_CHECK_EQUAL(nauczyciel.getMaxDlWypoz(), 30);
        BOOST_CHECK_EQUAL(nauczyciel.getMaksLKsiazek(), 10);
        BOOST_CHECK_EQUAL(nauczyciel.getTytul(), "dr");

        nauczyciel.setKara(2.5);
        nauczyciel.setMaxDlWypoz(32);
        nauczyciel.setMaksLKsiazek(11);
        nauczyciel.setTytul("prof.");

        BOOST_CHECK_EQUAL(nauczyciel.getKara(), 2.5);
        BOOST_CHECK_EQUAL(nauczyciel.getMaxDlWypoz(), 32);
        BOOST_CHECK_EQUAL(nauczyciel.getMaksLKsiazek(), 11);
        BOOST_CHECK_EQUAL(nauczyciel.getTytul(), "prof.");
    }
    BOOST_AUTO_TEST_CASE(PozostaliCase)
    {
        Pozostali pozostali(1.5, 21, 7, "Inzynier");
        BOOST_CHECK_EQUAL(pozostali.getKara(), 1.5);
        BOOST_CHECK_EQUAL(pozostali.getMaxDlWypoz(), 21);
        BOOST_CHECK_EQUAL(pozostali.getMaksLKsiazek(), 7);
        BOOST_CHECK_EQUAL(pozostali.getZawod(), "Inzynier");

        pozostali.setKara(2.0);
        pozostali.setMaxDlWypoz(23);
        pozostali.setMaksLKsiazek(8);
        pozostali.setZawod("Programista");

        BOOST_CHECK_EQUAL(pozostali.getKara(), 2.0);
        BOOST_CHECK_EQUAL(pozostali.getMaxDlWypoz(), 23);
        BOOST_CHECK_EQUAL(pozostali.getMaksLKsiazek(), 8);
        BOOST_CHECK_EQUAL(pozostali.getZawod(), "Programista");
    }

BOOST_AUTO_TEST_SUITE_END()

