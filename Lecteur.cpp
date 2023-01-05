#include "Lecteur.h"
#include <iostream>

Person::Person(std::string firstname, std::string lastname)
    : _firstname(firstname), _lastname(lastname) {}

std::string Person::firstname() const { return _firstname; }

std::string Person::lastname() const { return _lastname; }

std::string Person::getFullName() const {
  return std::string(firstname() + " " + std::string(lastname()));
};