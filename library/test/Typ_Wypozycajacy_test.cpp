

#include <boost/test/unit_test.hpp>
#include "Uczen.h"
#include "Nauczyciel.h"
#include "Pozostali.h"

BOOST_AUTO_TEST_SUITE(Typ_WypozycajacySuiteCorrect)

    BOOST_AUTO_TEST_CASE(UczenCase)
    {
        Uczen uczen(1.0, 14, 5, "1");

        uczen.setKara(1.5);
        uczen.setMaxDlWypoz(16);
        uczen.setMaksLKsiazek(6);
        uczen.setNrSemestru("2");

        BOOST_CHECK_EQUAL(uczen.getKara(), 1.5);
        BOOST_CHECK_EQUAL(uczen.getMaxDlWypoz(), 16);
        BOOST_CHECK_EQUAL(uczen.getMaksLKsiazek(), 6);
        BOOST_CHECK_EQUAL(uczen.getNrSemestru(), "2");
    }
    BOOST_AUTO_TEST_CASE(UczenExceptionCase)
    {
        BOOST_CHECK_THROW(Uczen(1.0, -1, 5, "1"), WypozyczajacyException);
        BOOST_CHECK_THROW(Uczen(1.0, 14, -1, "1"), WypozyczajacyException);
        BOOST_CHECK_THROW(Uczen(-1.0, 14, 5, "1"), WypozyczajacyException);
        BOOST_CHECK_THROW(Uczen(1.0, 14, 5, ""), WypozyczajacyException);

        Uczen uczen(1.0, 14, 5, "1");

        BOOST_CHECK_THROW(uczen.setKara(-1.0), WypozyczajacyException);
        BOOST_CHECK_THROW(uczen.setMaxDlWypoz(-1), WypozyczajacyException);
        BOOST_CHECK_THROW(uczen.setMaksLKsiazek(-1), WypozyczajacyException);
        BOOST_CHECK_THROW(uczen.setNrSemestru(""), WypozyczajacyException);
    }
    BOOST_AUTO_TEST_CASE(NauczycielCase)
    {
        Nauczyciel nauczyciel(2.0, 30, 10, "dr");

        nauczyciel.setKara(2.5);
        nauczyciel.setMaxDlWypoz(32);
        nauczyciel.setMaksLKsiazek(11);
        nauczyciel.setTytul("prof.");

        BOOST_CHECK_EQUAL(nauczyciel.getKara(), 2.5);
        BOOST_CHECK_EQUAL(nauczyciel.getMaxDlWypoz(), 32);
        BOOST_CHECK_EQUAL(nauczyciel.getMaksLKsiazek(), 11);
        BOOST_CHECK_EQUAL(nauczyciel.getTytul(), "prof.");
    }
    BOOST_AUTO_TEST_CASE(NauczycielExceptionCase)
    {
        BOOST_CHECK_THROW(Nauczyciel(2.0, -1, 10, "dr"), WypozyczajacyException);
        BOOST_CHECK_THROW(Nauczyciel(2.0, 30, -1, "dr"), WypozyczajacyException);
        BOOST_CHECK_THROW(Nauczyciel(-2.0, 30, 10, "dr"), WypozyczajacyException);
        BOOST_CHECK_THROW(Nauczyciel(2.0, 30, 10, ""), WypozyczajacyException);

        Nauczyciel nauczyciel(2.0, 30, 10, "dr");

        BOOST_CHECK_THROW(nauczyciel.setKara(-2.0), WypozyczajacyException);
        BOOST_CHECK_THROW(nauczyciel.setMaxDlWypoz(-1), WypozyczajacyException);
        BOOST_CHECK_THROW(nauczyciel.setMaksLKsiazek(-1), WypozyczajacyException);
        BOOST_CHECK_THROW(nauczyciel.setTytul(""), WypozyczajacyException);
    }
    BOOST_AUTO_TEST_CASE(PozostaliCase)
    {
        Pozostali pozostali(1.5, 21, 7, "Inzynier");

        pozostali.setKara(2.0);
        pozostali.setMaxDlWypoz(23);
        pozostali.setMaksLKsiazek(8);
        pozostali.setZawod("Programista");

        BOOST_CHECK_EQUAL(pozostali.getKara(), 2.0);
        BOOST_CHECK_EQUAL(pozostali.getMaxDlWypoz(), 23);
        BOOST_CHECK_EQUAL(pozostali.getMaksLKsiazek(), 8);
        BOOST_CHECK_EQUAL(pozostali.getZawod(), "Programista");
    }
    BOOST_AUTO_TEST_CASE(PozostaliExceptionCase)
    {
        BOOST_CHECK_THROW(Pozostali(1.5, -1, 7, "Inzynier"), WypozyczajacyException);
        BOOST_CHECK_THROW(Pozostali(1.5, 21, -1, "Inzynier"), WypozyczajacyException);
        BOOST_CHECK_THROW(Pozostali(-1.5, 21, 7, "Inzynier"), WypozyczajacyException);
        BOOST_CHECK_THROW(Pozostali(1.5, 21, 7, ""), WypozyczajacyException);

        Pozostali pozostali(1.5, 21, 7, "Inzynier");

        BOOST_CHECK_THROW(pozostali.setKara(-2.0), WypozyczajacyException);
        BOOST_CHECK_THROW(pozostali.setMaxDlWypoz(-1), WypozyczajacyException);
        BOOST_CHECK_THROW(pozostali.setMaksLKsiazek(-1), WypozyczajacyException);
        BOOST_CHECK_THROW(pozostali.setZawod(""), WypozyczajacyException);
    }

BOOST_AUTO_TEST_SUITE_END()

