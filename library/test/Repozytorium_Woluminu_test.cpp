//
// Created by student on 17.06.23.
//
#include <boost/test/unit_test.hpp>
#include "Zarzadca_Woluminu.h"
#include "Naukowa.h"
#include "Beletrystyka.h"
BOOST_AUTO_TEST_SUITE(RepozytoriumWoluminuSuiteCorrect)
    BOOST_AUTO_TEST_CASE(RepozytoriumWoluminuTest)
    {
        auto repo = std::make_shared<Repozytorium_Woluminu>();

        std::vector<std::string> autor;
        autor.push_back("J.K. Rowling");
        auto wolumin1 = std::make_shared<Beletrystyka>("Helion", "PL", "Harry Potter", autor, "15+", "Fantasy");

        repo->dodajDoHistorycznych(wolumin1);
        BOOST_CHECK_EQUAL(repo->getHistorycznyWolumin().size(), 1);
    }
BOOST_AUTO_TEST_SUITE_END()