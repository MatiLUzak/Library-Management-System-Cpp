//
// Created by student on 14.06.23.
//

#ifndef OOPPROJECT_WOLUMINEXCEPTION_H
#define OOPPROJECT_WOLUMINEXCEPTION_H
#include <stdexcept>
#include <string>
class WoluminException : public std::logic_error {
public:
    explicit WoluminException(const std::string& what) : std::logic_error(what) {}
};
#endif //OOPPROJECT_WOLUMINEXCEPTION_H
