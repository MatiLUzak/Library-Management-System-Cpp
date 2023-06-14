//
// Created by student on 14.06.23.
//

#ifndef OOPPROJECT_WYPOZYCZAJACYEXCEPTION_H
#define OOPPROJECT_WYPOZYCZAJACYEXCEPTION_H
#include <stdexcept>
#include <string>
class WypozyczajacyException : public std::logic_error {
public:
    explicit WypozyczajacyException(const std::string& what) : std::logic_error(what) {}
};
#endif //OOPPROJECT_WYPOZYCZAJACYEXCEPTION_H
