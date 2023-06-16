//
// Created by student on 08.06.23.
//
#include <boost/test/unit_test.hpp>
#include "Naukowa.h"
#include "Beletrystyka.h"
#include "Czasopismo.h"
#include <vector>

BOOST_AUTO_TEST_SUITE(WoluminSuiteCorrect)

    BOOST_AUTO_TEST_CASE(NaukowaCase) {
        std::vector<std::string> autors = {"Autor1", "Autor2"};
        Naukowa n1("Wydawnictwo1", "Polski", "Tytuł1", autors, "Recenzja1", "Dział1");

        n1.setWydawnictwo("Wydawnictwo2");
        n1.setJezyk("Angielski");
        n1.setTytul("Tytuł2");
        n1.setRecenzja("Recenzja2");
        n1.setDział("Dział2");
        std::vector<std::string> newAutors = {"Autor3", "Autor4"};
        n1.setAutor(newAutors);

        BOOST_CHECK_EQUAL(n1.getWydawnictwo(), "Wydawnictwo2");
        BOOST_CHECK_EQUAL(n1.getJezyk(), "Angielski");
        BOOST_CHECK_EQUAL(n1.getTytul(), "Tytuł2");
        BOOST_CHECK_EQUAL(n1.getRecenzja(), "Recenzja2");
        BOOST_CHECK_EQUAL(n1.getDział(), "Dział2");
        BOOST_CHECK(n1.getAutor() == newAutors);
    }
    BOOST_AUTO_TEST_CASE(NaukowaExceptionCase) {
        std::vector<std::string> autors = {"Autor1", "Autor2"};
        std::vector<std::string> emptyAutors;
        BOOST_CHECK_THROW(Naukowa("", "Polski", "Tytuł1", autors, "Recenzja1", "Dział1"), WoluminException);
        BOOST_CHECK_THROW(Naukowa("Wydawnictwo1", "", "Tytuł1", autors, "Recenzja1", "Dział1"), WoluminException);
        BOOST_CHECK_THROW(Naukowa("Wydawnictwo1", "Polski", "", autors, "Recenzja1", "Dział1"),WoluminException);
        BOOST_CHECK_THROW(Naukowa("Wydawnictwo1", "Polski", "Tytuł1", autors, "", "Dział1"),WoluminException);
        BOOST_CHECK_THROW(Naukowa("Wydawnictwo1", "Polski", "Tytuł1", autors, "Recenzja1", ""),WoluminException);
        BOOST_CHECK_THROW(Naukowa("Wydawnictwo1", "Polski", "Tytuł1", emptyAutors, "Recenzja1", "Dział1"),WoluminException);

        Naukowa n1("Wydawnictwo1", "Polski", "Tytuł1", autors, "Recenzja1", "Dział1");

        BOOST_CHECK_THROW(n1.setWydawnictwo(""), WoluminException);
        BOOST_CHECK_THROW(n1.setJezyk(""), WoluminException);
        BOOST_CHECK_THROW(n1.setTytul(""), WoluminException);
        BOOST_CHECK_THROW(n1.setRecenzja(""), WoluminException);
        BOOST_CHECK_THROW(n1.setDział(""), WoluminException);
        BOOST_CHECK_THROW(n1.setAutor(emptyAutors), WoluminException);
    }
    BOOST_AUTO_TEST_CASE(CzasopismoCase) {
        Czasopismo c1("Wydawnictwo1", "Polski", "Tytuł1", "Nr1");
        c1.setWydawnictwo("Wydawnictwo2");
        c1.setJezyk("Angielski");
        c1.setTytul("Tytuł2");
        c1.setNrWydania("Nr2");

        BOOST_CHECK_EQUAL(c1.getWydawnictwo(), "Wydawnictwo2");
        BOOST_CHECK_EQUAL(c1.getJezyk(), "Angielski");
        BOOST_CHECK_EQUAL(c1.getTytul(), "Tytuł2");
        BOOST_CHECK_EQUAL(c1.getNrWydania(), "Nr2");
    }
    BOOST_AUTO_TEST_CASE(CzasopismoExceptionCase) {
        BOOST_CHECK_THROW(Czasopismo("", "Polski", "Tytuł1", "Nr1"), WoluminException);
        BOOST_CHECK_THROW(Czasopismo("Wydawnictwo1", "", "Tytuł1", "Nr1"), WoluminException);
        BOOST_CHECK_THROW(Czasopismo("Wydawnictwo1", "Polski", "", "Nr1"), WoluminException);
        BOOST_CHECK_THROW(Czasopismo("Wydawnictwo1", "Polski", "Tytuł1", ""), WoluminException);

        Czasopismo c1("Wydawnictwo1", "Polski", "Tytuł1", "Nr1");

        BOOST_CHECK_THROW(c1.setWydawnictwo(""), WoluminException);
        BOOST_CHECK_THROW(c1.setJezyk(""), WoluminException);
        BOOST_CHECK_THROW(c1.setTytul(""), WoluminException);
        BOOST_CHECK_THROW(c1.setNrWydania(""), WoluminException);
    }
    BOOST_AUTO_TEST_CASE(BeletrystykaCase) {
        std::vector<std::string> autors = {"Autor1", "Autor2"};
        Beletrystyka b1("Wydawnictwo1", "Polski", "Tytuł1", autors, "Przedział1", "Rodzaj1");

        b1.setWydawnictwo("Wydawnictwo2");
        b1.setJezyk("Angielski");
        b1.setTytul("Tytuł2");
        b1.setPrzedziałWiekowy("Przedział2");
        b1.setRodzaj("Rodzaj2");
        std::vector<std::string> newAutors = {"Autor3", "Autor4"};
        b1.setAutor(newAutors);

        BOOST_CHECK_EQUAL(b1.getWydawnictwo(), "Wydawnictwo2");
        BOOST_CHECK_EQUAL(b1.getJezyk(), "Angielski");
        BOOST_CHECK_EQUAL(b1.getTytul(), "Tytuł2");
        BOOST_CHECK_EQUAL(b1.getPrzedziałWiekowy(), "Przedział2");
        BOOST_CHECK_EQUAL(b1.getRodzaj(), "Rodzaj2");
        BOOST_CHECK(b1.getAutor() == newAutors);
    }
    BOOST_AUTO_TEST_CASE(BeletrystykaExceptionCase) {
        std::vector<std::string> autors = {"Autor1", "Autor2"};
        std::vector<std::string> emptyAutors;

        BOOST_CHECK_THROW(Beletrystyka("", "Polski", "Tytuł1", autors, "Przedział1", "Rodzaj1"), WoluminException);
        BOOST_CHECK_THROW(Beletrystyka("Wydawnictwo1", "", "Tytuł1", autors, "Przedział1", "Rodzaj1"), WoluminException);
        BOOST_CHECK_THROW(Beletrystyka("Wydawnictwo1", "Polski", "", autors, "Przedział1", "Rodzaj1"), WoluminException);
        BOOST_CHECK_THROW(Beletrystyka("Wydawnictwo1", "Polski", "Tytuł1", autors, "", "Rodzaj1"), WoluminException);
        BOOST_CHECK_THROW(Beletrystyka("Wydawnictwo1", "Polski", "Tytuł1", autors, "Przedział1", ""), WoluminException);
        BOOST_CHECK_THROW(Beletrystyka("Wydawnictwo1", "Polski", "Tytuł1", emptyAutors, "Przedział1", "Rodzaj1"), WoluminException);

        Beletrystyka b1("Wydawnictwo1", "Polski", "Tytuł1", autors, "Przedział1", "Rodzaj1");

        BOOST_CHECK_THROW(b1.setWydawnictwo(""), WoluminException);
        BOOST_CHECK_THROW(b1.setJezyk(""), WoluminException);
        BOOST_CHECK_THROW(b1.setTytul(""), WoluminException);
        BOOST_CHECK_THROW(b1.setPrzedziałWiekowy(""), WoluminException);
        BOOST_CHECK_THROW(b1.setRodzaj(""), WoluminException);
        BOOST_CHECK_THROW(b1.setAutor(emptyAutors), WoluminException);
    }
BOOST_AUTO_TEST_SUITE_END()
