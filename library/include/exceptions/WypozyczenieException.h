//
// Created by student on 14.06.23.
//

#ifndef OOPPROJECT_WYPOZYCZENIEEXCEPTION_H
#define OOPPROJECT_WYPOZYCZENIEEXCEPTION_H
#include <stdexcept>
#include <string>
class WypozyczenieException : public std::logic_error {
public:
    explicit WypozyczenieException(const std::string& what) : std::logic_error(what) {}
};
#endif //OOPPROJECT_WYPOZYCZENIEEXCEPTION_H
