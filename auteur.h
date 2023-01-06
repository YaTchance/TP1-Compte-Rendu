
#include <iostream>
#include <string>
#include "date.h"

class Auteur {
private:
  std::string  _born;
  std::string _IDnume;
  std::string _firstname;
  std::string _lastname;

public:
  Auteur();

  Auteur(std::string IDnume, std::string firstname , std::string lastname, std::string  born);


  std::string firstname() const; //getters
  std::string lastname() const;
  std::string IDnume() const;
  std::string born() const;
  std::string getFullNameAuteur() const;

};

bool isID(std::string IDnume);
bool isBorn(std::string born);