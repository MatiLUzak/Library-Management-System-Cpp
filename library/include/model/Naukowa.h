//
// Created by student on 08.06.23.
//

#ifndef OOPPROJECT_NAUKOWA_H
#define OOPPROJECT_NAUKOWA_H
#include "Ksiazka.h"
class Naukowa:public Ksiazka
        {
private:
            std::string recenzja;
            std::string dział;
public:
    Naukowa(const std::string &wydawnictwo, const std::string &jezyk, const std::string &tytul,
            const std::vector<std::string> &autor, const std::string &recenzja, const std::string &dział);

    const std::string &getRecenzja() const;

    const std::string &getDział() const;

    void setRecenzja(const std::string &recenzja);

    void setDział(const std::string &dział);

    std::string pobierz_informacje() override;
};
#endif //OOPPROJECT_NAUKOWA_H
