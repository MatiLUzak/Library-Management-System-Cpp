//
// Created by student on 10.06.23.
//
#include <boost/test/unit_test.hpp>
#include <boost/uuid/uuid_generators.hpp> //generatory dla uuid
#include "Naukowa.h"
#include "Nauczyciel.h"
#include "Wypozycajacy.h"
#include "Zarzadca_Wypozyczenia.h"
#include "Beletrystyka.h"
BOOST_AUTO_TEST_SUITE(ZarzadcaWypozyczeniaSuite)

    BOOST_AUTO_TEST_CASE(DodajWypozyczenieTest) {
        Zarzadca_Wypozyczenia zarzadca;

        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        auto wypozyczajacy = std::make_shared<Wypozycajacy>(std::make_shared<Nauczyciel>(0.0, 30, 10, "Dr"), "Jan Kowalski", boost::posix_time::time_from_string("2023-05-01 00:00:00"), "Warszawa");
        auto wolumin = std::make_shared<Beletrystyka>("Helion", "PL", "Harry Potter", autor, "15+", "Fantasy");

        //Wypozyczenie wypozyczenie(wypozyczajacy, wolumin);
std::shared_ptr<Wypozyczenie> wypozyczenie=std::make_shared<Wypozyczenie>(wypozyczajacy, wolumin);
        zarzadca.dodajWypozyczenie(wypozyczenie);
        BOOST_CHECK_EQUAL(zarzadca.znajdzWszystkieWypozyczenia().size(), 1);
        zarzadca.usunWypozyczenie(wypozyczenie);
        BOOST_CHECK_EQUAL(zarzadca.znajdzWszystkieWypozyczenia().size(), 0);
    }

    BOOST_AUTO_TEST_CASE(ObliczKareTest) {
        Zarzadca_Wypozyczenia zarzadca;

        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        auto wypozyczajacy = std::make_shared<Wypozycajacy>(std::make_shared<Nauczyciel>(0.0, 30, 10, "Dr"),
                                                            "Jan Kowalski",
                                                            boost::posix_time::time_from_string("2023-05-01 00:00:00"),
                                                            "Warszawa");
        auto wolumin = std::make_shared<Beletrystyka>("Helion", "PL", "Harry Potter", autor, "15+", "Fantasy");
        std::shared_ptr<Wypozyczenie> wypozyczenie = std::make_shared<Wypozyczenie>(wypozyczajacy, wolumin);
        zarzadca.dodajWypozyczenie(wypozyczenie);
        zarzadca.usunWypozyczenie(wypozyczenie);

        int kara = zarzadca.obliczKare(wypozyczenie);
        BOOST_CHECK(kara >= 0); // zakładam, że kara jest zawsze nieujemn
    }
BOOST_AUTO_TEST_SUITE_END()





