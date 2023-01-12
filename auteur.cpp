#include "auteur.h"
#include "date.h"
#include <cassert>
#include <regex>

Auteur::Auteur() {
  _IDnume = " ";
  _firstname = "toto";
  _lastname = " ";
}

Auteur::Auteur(std::string IDnume, std::string firstname, std::string lastname,
               std::string born) {
  bool status = isID(IDnume);
  bool status1 = isBorn(born);
  assert(status && "ID is not valid");
  assert(status1 && "Date born not valid");
  _IDnume = IDnume;
  _firstname = firstname;
  _lastname = lastname;
  _born = born;
}

std::string Auteur::IDnume() const { return _IDnume; }

std::string Auteur::firstname() const { return _firstname; }

std::string Auteur::lastname() const { return _lastname; }
std::string Auteur::born() const { return _born; }

std::string Auteur::getFullNameAuteur() const {
  return std::string(IDnume() + " " + std::string(firstname()) + " " +
                     std::string(lastname()) + " " + std::string(born()));
};

bool isID(std::string IDnume) {
  if (regex_match(IDnume, std::regex("^n(-)[0-9]{6}")))
    return true;
  else
    return false;
}

bool isBorn(std::string born) {
  if (regex_match(born, std::regex("^[0-9]{4}(/)[0-9]{2}(/)[0-9]{2}")))
    return true;
  else
    return false;
}