#include <regex>
#include "auteur.h"
#include <cassert> 
#include "date.h"

Auteur::Auteur(){    
    _IDnume = " ";
    _firstname = "toto";
    _lastname = " ";
}

Auteur::Auteur(std::string IDnume, std::string firstname, std::string lastname){ 
  bool status = isID(IDnume);
  assert(status && "ID is not valid");
    _IDnume = IDnume;
    _firstname = firstname;
    _lastname = lastname;

      }

std::string Auteur::IDnume() const 
        { return _IDnume;
          } 

std::string Auteur::firstname() const 
      { return _firstname; 
        }

std::string Auteur::lastname() const 
    { return _lastname; 
      }




std::string Auteur::getFullNameAuteur() const {
  return std::string(IDnume() + " " + std::string(firstname()) + " " + std::string(lastname()) /*+ " " + std::string(born())*/);
};

bool isID(std::string IDnume){
  if (regex_match (IDnume, std::regex("^n(-)[0-9]{6}")))
    return true;
  else 
    return false;
}
