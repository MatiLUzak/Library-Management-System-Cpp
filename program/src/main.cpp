#include <iostream>
#include "Wypozyczenie.h"
#include "Czasopismo.h"
#include <sstream>

using namespace std;

int main() {
   // cout << "Hello, World!" << endl;
    Wolumin_Ptr c2=make_shared<Czasopismo>("WydawnictwoTestowe", "Polski", "TytulTestowy", "NrTestowy");
    Czasopismo c("WydawnictwoTestowe", "Polski", "TytulTestowy", "NrTestowy");

    c2->zapisz_do_pliku();

    string odczytane = c2->czytaj_z_pliku();
        cout << "Odczytane: '" << odczytane << "'\n";
        cout << "Oczekiwane: '" << c.pobierz_informacje() << "'\n";
    return 0;
}