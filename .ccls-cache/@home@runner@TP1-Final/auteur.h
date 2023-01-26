
#include "date.h"
#include <iostream>
#include <string>

class Auteur {
private:
  std::string _born;
  std::string _IDnume;
  std::string _firstname;
  std::string _lastname;

public:
/*****************************************************************************************************************************
                                 Constructeur d'Auteur
**********************************************************************************************************************************/
  Auteur();
  Auteur(std::string IDnume, std::string firstname, std::string lastname,
         std::string born);
/*****************************************************************************************************************************
                                     Getter
**********************************************************************************************************************************/
  std::string firstname() const; // getters
  std::string lastname() const;
  std::string IDnume() const;
  std::string born() const;
  std::string getFullNameAuteur() const;
};
/*****************************************************************************************************************************
                                 Fonction test
**********************************************************************************************************************************/
bool isID(std::string IDnume);
bool isBorn(std::string born);