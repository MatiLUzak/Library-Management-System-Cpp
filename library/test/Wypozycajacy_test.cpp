#include <boost/test/unit_test.hpp>
#include "Wypozycajacy.h"
#include "Uczen.h"
#include "Nauczyciel.h"
#include "Pozostali.h"
#include <sstream>

using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(WypozycajacySuiteCorrect)

    BOOST_AUTO_TEST_CASE(ConstructorTest)
    {
        PTime testDate = boost::posix_time::time_from_string("2023-05-30 00:00:00");
        Typ_Wypozycajacy_Ptr uczen = std::make_shared<Uczen>(0.0, 30, 10, "2");
        Typ_Wypozycajacy_Ptr nauczyciel = std::make_shared<Nauczyciel>(0.0, 30, 10, "Dr");
        Typ_Wypozycajacy_Ptr pozostali = std::make_shared<Pozostali>(0.0, 30, 10, "Inżynier");

        Wypozycajacy w1(uczen, "Jan Kowalski", testDate, "Kraków");
        Wypozycajacy w2(nauczyciel, "Anna Nowak", testDate, "Warszawa");
        Wypozycajacy w3(pozostali, "Piotr Zieliński", testDate, "Wrocław");

        BOOST_CHECK_EQUAL(w1.getTypWypozycajacy()->getMaksLKsiazek(), 10);
        BOOST_CHECK_EQUAL(w2.getNazwa(), "Anna Nowak");
        BOOST_CHECK_EQUAL(w3.getAdres(), "Wrocław");
        w1.setNazwa("Marian Las");
        w1.getTypWypozycajacy()->setMaxDlWypoz(5);
        BOOST_CHECK_EQUAL(w1.getNazwa(),"Marian Las");
        BOOST_CHECK_EQUAL( w1.getTypWypozycajacy()->getMaxDlWypoz(),5);
    }

    BOOST_AUTO_TEST_CASE(Info_Wyp_Test_asd)
    {
        PTime testDate = boost::posix_time::time_from_string("2023-05-30 00:00:00");
        Typ_Wypozycajacy_Ptr uczen = std::make_shared<Uczen>(0.0, 30, 10, "2");
        Wypozycajacy w3(uczen, "Jan Kowalski", testDate, "Kraków");

        std::string expected_info = "Nazwa: Jan Kowalski\n"
                                    "dataUr: 2023-May-30 00:00:00\n"
                                    "adres: Kraków\n"
                                    "Typ_wypo: " + uczen->Typ_Info();

        //BOOST_CHECK_EQUAL(w3.pobierz_inforacje_wyp(), expected_info);
    }

BOOST_AUTO_TEST_SUITE_END()
