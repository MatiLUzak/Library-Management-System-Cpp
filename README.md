# Library-Management-System-Cpp

## 📌 Opis projektu

**Library-Management-System-Cpp** to aplikacja napisana w języku **C++**, która umożliwia zarządzanie zasobami bibliotecznymi. Projekt wykorzystuje **CMake** do konfiguracji procesu budowania oraz jest zorganizowany w moduły dla lepszej struktury i czytelności kodu.

## 🛠 Wymagania

Aby skompilować i uruchomić projekt, potrzebujesz:

- **Kompilatora C++** zgodnego ze standardem C++11 lub nowszym (np. **g++**, **clang++**)
- **CMake** w wersji 3.10 lub nowszej

## 🚀 Instalacja i uruchomienie

1. **Klonowanie repozytorium:**

   ```bash
   git clone https://github.com/MatiLUzak/Biblioteka.git
   cd Biblioteka
   ```

2. **Tworzenie katalogu build i konfiguracja projektu:**

   ```bash
   mkdir build
   cd build
   cmake ..
   ```

3. **Kompilacja projektu:**

   ```bash
   cmake --build .
   ```

4. **Uruchomienie aplikacji:**

   ```bash
   ./program/LibraryApp
   ```

   *Uwaga: Ścieżka do pliku wykonywalnego może się różnić w zależności od konfiguracji systemu.*

## 📂 Struktura projektu

```
Biblioteka/
├── library/
│   ├── Book.cpp
│   ├── Book.hpp
│   ├── Member.cpp
│   ├── Member.hpp
│   └── ...
├── program/
│   ├── main.cpp
│   └── ...
├── .gitignore
├── CMakeLists.txt
└── README.md
```

- **library/** – zawiera implementacje klas związanych z logiką aplikacji, takich jak `Book` i `Member`.
- **program/** – zawiera punkt wejścia aplikacji (`main.cpp`) oraz inne pliki związane z uruchamianiem programu.
- **CMakeLists.txt** – plik konfiguracyjny dla CMake, definiujący proces budowania projektu.

## ✍️ Autor

- **MatiLUzak** – [Profil GitHub](https://github.com/MatiLUzak)

## 📜 Licencja

Ten projekt jest licencjonowany na podstawie licencji MIT. Szczegóły znajdują się w pliku `LICENSE`.
