cmake_minimum_required(VERSION 3.4)
project(Library)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        include/model/Typ_Wypozycajacy.h src/model/Typ_Wypozycajacy.cpp include/model/Uczen.h include/model/Nauczyciel.h include/model/Pozostali.h src/model/Pozostali.cpp src/model/Uczen.cpp src/model/Nauczyciel.cpp include/model/Wolumin.h src/model/Wolumin.cpp include/model/Czasopismo.h src/model/Czasopismo.cpp include/model/Ksiazka.h src/model/Ksiazka.cpp include/model/Beletrystyka.h src/model/Beletrystyka.cpp include/model/Naukowa.h src/model/Naukowa.cpp include/model/Wypozycajacy.h src/model/Wypozycajacy.cpp include/model/Wypozyczenie.h src/model/Wypozyczenie.cpp include/repositories/Repozytorium.h include/repositories/Repozytorium_Wypozyczenia.h include/repositories/Repozytorium_Woluminu.h include/repositories/Repozytorium_Wypozyczajacy.h src/repositories/Repozytorium_Wypozyczenia.cpp src/repositories/Repozytorium_Woluminu.cpp src/repositories/Repozytorium_Wypozyczajacy.cpp include/menagers/Zarzadca_Woluminu.h src/menagers/Zarzadca_Woluminu.cpp include/menagers/Zarzadca_Wyporzycajacy.h src/menagers/Zarzadca_Wyporzycajacy.cpp src/menagers/Zarzadca_Wypozyczenia.cpp include/menagers/Zarzadca_Wypozyczenia.h include/exceptions/WoluminException.h include/exceptions/WypozyczajacyException.h include/exceptions/WypozyczenieException.h include/exceptions/RepozytoriumException.h)

add_library(Library ${SOURCE_FILES})

#add 'include' directory with header files from 'Library' project to paths
target_include_directories(Library PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_CURRENT_SOURCE_DIR}/include/model
        ${CMAKE_CURRENT_SOURCE_DIR}/include/repositories
        ${CMAKE_CURRENT_SOURCE_DIR}/include/menagers
        ${CMAKE_CURRENT_SOURCE_DIR}/include/exceptions)


#Unit Tests section

# Check if generating Visual Studio 14 2015 project
if(MSVC)
    if(NOT BOOST_ROOT)
        set(BOOST_ROOT "C:/local/boost_1_60_0")
    endif()
    set(Boost_INCLUDE_DIR "${BOOST_ROOT}")
    set(Boost_LIBRARY_DIR "${BOOST_ROOT}/lib32-msvc-14.0")
    set(Boost_USE_STATIC_LIBS ON)
    set(Boost_USE_MULTITHREADED ON)

    if(NOT EXISTS ${Boost_LIBRARY_DIR})
        message(WARNING "Boost library requires manual installation in Windows")
        message("1) Browse: https://sourceforge.net/projects/boost/files/boost-binaries/1.60.0/")
        message("2) Download: boost_1_60_0-msvc-14.0-32.exe")
        message("3) Install into default directory: C:\\local")
        message("")
        message(FATAL_ERROR "Boost libraries not found at ${Boost_LIBRARY_DIR}")
    endif()

    find_package(Boost COMPONENTS unit_test_framework REQUIRED)

    include_directories(${Boost_INCLUDE_DIR})
    link_directories(${Boost_LIBRARY_DIR})

else()
    find_package(Boost COMPONENTS unit_test_framework REQUIRED)
endif()

set(SOURCE_TEST_FILES
        test/master.cpp
        test/Typ_Wypozycajacy_test.cpp test/Wolumin_test.cpp test/Wypozycajacy_test.cpp test/Wypozyczenie_test.cpp test/Zazradca_Woluminu_test.cpp test/Zarzadca_Wypozyczajacy_test.cpp test/Zarzadca_Wypozyczenia_test.cpp)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

add_executable (Test ${SOURCE_TEST_FILES})

target_link_libraries (Test
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

enable_testing()
add_test(LibraryTest Test)