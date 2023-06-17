//
// Created by student on 10.06.23.
//
#include "Zarzadca_Wypozyczenia.h"

void Zarzadca_Wypozyczenia::dodajWypozyczenie(WypozyczeniePtr wypozyczenie) {
repozytorium.dodaj(wypozyczenie);
}

void Zarzadca_Wypozyczenia::usunWypozyczenie(WypozyczeniePtr wypozyczenie) {
    if (wypozyczenie == nullptr) throw RepozytoriumException("Nullptr exception");
    wypozyczenie->koniec_wypoz();
    repozytorium.dodaj_do_historyczne_wypoz(wypozyczenie);
    repozytorium.usun(wypozyczenie);

}

double Zarzadca_Wypozyczenia::obliczKare(WypozyczeniePtr wypozyczenie) {
    auto historyczne_wypozyczenia = repozytorium.getHistoryczneWypoz();

    for (auto& hist_wypozyczenie : historyczne_wypozyczenia) {
        if (hist_wypozyczenie == wypozyczenie) {
            return hist_wypozyczenie->oblicz_kare();
        }
    }

    std::cout << "Wypożyczenie nie jest w historii wypożyczeń!" << std::endl;
    return -1;
}
