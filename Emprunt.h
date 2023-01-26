#include "date.h"
#include <iostream>
#include <string>
#pragma once

class Emprunt {

private:
  Date _dateTakebook;
  Date _dateReturnbook;

public:
  Emprunt(Date dateTakebook = Date(2002, 7, 10),
          Date dateReturnbook = Date(2002, 7, 10));

  std::string takebook() const;
  std::string returnbook() const;
  // Livre livre() const;
  std::string getEmprunt() const;
  Date getDateTakebook() const;
  Date getDateReturnbook() const;
};
std::ostream &operator<<(std::ostream &os, const Emprunt &emprunt);