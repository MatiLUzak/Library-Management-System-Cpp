//
// Created by student on 11.06.23.
//

#ifndef OOPPROJECT_EXCEPTION_H
#define OOPPROJECT_EXCEPTION_H
#include <string>
#include <stdexcept>
class ParameterException : public std::logic_error {
public:
    explicit ParameterException(const std::string& what_arg) : std::logic_error(what_arg) {}
};
#endif //OOPPROJECT_EXCEPTION_H
