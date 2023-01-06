#include "Emprunt.h"
#include <regex>

Emprunt::Emprunt(std::string takebook, std::string returnbook) {
  _takebook = takebook;
  _returnbook = returnbook;
  //_livre = livre;
};

std::string Emprunt::getTakebook() const {
    return _takebook;
};
  std::string Emprunt::getReturnbook() const {
    return _returnbook;
};
/*bool isTakebook(std::string takebook){
  if (regex_match (takebook, std::regex("^[0-9]{4}(/)[0-9]{2}(/)[0-9]{2}")))
    return true;
  else 
    return false;
}*/
/*  Livre Emprunt::livre() const{
    return _livre;
  }*/
std::string Emprunt::getEmprunt() const {
  return std::string(takebook() + " " +std::string(returnbook()));
};