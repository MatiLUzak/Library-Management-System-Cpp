//
// Created by student on 14.06.23.
//

#ifndef OOPPROJECT_REPOZYTORIUMEXCEPTION_H
#define OOPPROJECT_REPOZYTORIUMEXCEPTION_H
#include <stdexcept>
#include <string>
class RepozytoriumException : public std::logic_error {
public:
    explicit RepozytoriumException(const std::string& what) : std::logic_error(what) {}
};
#endif //OOPPROJECT_REPOZYTORIUMEXCEPTION_H
