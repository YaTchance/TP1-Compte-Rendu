#include "Emprunt.h"
#include <regex>

Emprunt::Emprunt(Date dateTakebook, Date dateReturnbook) {
  _dateTakebook = dateTakebook;
  _dateReturnbook = dateReturnbook;
};

Date Emprunt::getDateTakebook() const { return _dateTakebook; }

Date Emprunt::getDateReturnbook() const { return _dateReturnbook; }

std::ostream &operator<<(std::ostream &os, const Emprunt &emprunt) {
  std::string displaybook =
      "\n Emprunt: " + toString(emprunt.getDateTakebook()) +
      "\n A rendre: " + toString(emprunt.getDateReturnbook());
  os << displaybook << std::endl;
  return os;
}