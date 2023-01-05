
#include <iostream>
#include <string>
#include "date.h"

class Auteur {
private:
  Date _born;
  std::string _IDnume;
  std::string _firstname;
  std::string _lastname;

public:
  Auteur(std::string IDnume, std::string firstname, std::string lastname, Date born);


  std::string firstname() const;
  std::string lastname() const;
 std::string IDnume() const;
  std::string getFullNameAuteur() const;
Date getBorn() const {
  return _born;
};
 


};

bool isID(std::string IDnume);
