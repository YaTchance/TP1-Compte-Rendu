
#include "livre.h"
#include "date.h"
#include <cassert>
#include <iostream>
#include <regex>



/*****************************************************************************************************************************
                                            Fonctionalité des Constructeurs Livre
**********************************************************************************************************************************/
Livre::Livre(Auteur auteur, std::string titre, std::string newbookgenre, std::string newbooklangue, std::string ISBN, Date datePublication) {
  bool status = isISBN(ISBN);
  assert(status && "ISBN is not valid");
  _auteur = auteur;
  _titre = titre;
  _newbookgenre = newbookgenre;
  _newbooklangue = newbooklangue;
  _ISBN = ISBN;
  _datePublication = datePublication;
}

Livre::Livre(Auteur auteur, std::string titre, Genres genre, Langues langue, std::string ISBN, Date datePublication) {
  bool status = isISBN(ISBN);
  assert(status && "ISBN is not valid");
  _auteur = auteur;
  _titre = titre;
  _genre = genre;
  _langue = langue;
  _ISBN = ISBN;
  _datePublication = datePublication;
}
/*****************************************************************************************************************************
                                            Enumérations des genres et langues des livres
**********************************************************************************************************************************/
std::string toStringGenre(Genres g) {
  switch (g) {
  case Genres::Science_fiction:
    return "Science_fiction";
    break;
  case Genres::Action:
    return "Action";
    break;
  case Genres::Policier:
    return "Policier";
    break;
  case Genres::Histoire:
    return "Histoire";
    break;
  case Genres::Réaliste:
    return "Réaliste";
    break;
  case Genres::Romance:
    return "Romance";
    break;
  case Genres::Fantastique:
    return "Fantastique";
    break;
  case Genres::Drama:
    return "Drama";
    break;
  case Genres::Comédie:
    return "Comédie";
    break;
  case Genres::Conte:
    return "Conte";
    break;
  default:
    break;
  }
}
std::string toStringLangue(Langues l) {
  switch (l) {
  case Langues::Français:
    return "Français";
    break;
  case Langues::Anglais:
    return "Anglais";
    break;
  case Langues::Allemand:
    return "Allemand";
    break;
  case Langues::Espagnol:
    return "Espagnol";
    break;
  case Langues::Chinois:
    return "Chinois";
    break;
  case Langues::Russe:
    return "Russe";
    break;
  case Langues::Japonais:
    return "Japonais";
    break;
  case Langues::Portugais:
    return "Portugais";
    break;
  case Langues::Polonnais:
    return "Polonnais";
    break;
  default:
    break;
  }
}

/*****************************************************************************************************************************
                                 Visualisation de toutes les variables privées dans la class Livre
**********************************************************************************************************************************/
std::string Livre::getTitre() const { return _titre; }
std::string Livre::getISBN() const { return _ISBN; }
std::string Livre::getNewBookGenre() const { return _newbookgenre; }
std::string Livre::getNewBookLangue() const { return _newbooklangue; }

/*****************************************************************************************************************************
                                 Visualisation de toutes les variables privées dans les autres class
**********************************************************************************************************************************/
Auteur Livre::getAuteur() const { return _auteur; }
Langues Livre::getLangue() const { return _langue; }
Genres Livre::getGenre() const { return _genre; }
Date Livre::getDatePublication() const { return _datePublication; }


/*****************************************************************************************************************************
                                 Déclaration et fonctionnalité du Test
**********************************************************************************************************************************/
bool isISBN(std::string ISBN) {
  if (regex_match(
          ISBN, std::regex("^[0-9]{3}(-)[0-9](-)[0-9]{4}(-)[0-9]{4}(-)[0-9]")))
    return true;
  else
    return false;
}
/*****************************************************************************************************************************
                                Visualtion du contructeur livre pour l'intégrer facilement dans le "MAIN"
**********************************************************************************************************************************/
std::ostream &operator<<(std::ostream &os, const Livre &livre) {

  std::string displaybook =
      "\n Auteur " + livre.getAuteur().getFullNameAuteur() +"\n"+
      +"\n Titre: " + livre.getTitre() +
      "\n Genre: " + toStringGenre(livre.getGenre()) +
      "\n Langue: " + toStringLangue(livre.getLangue()) +
      "\n ISBN: " + livre.getISBN() +
      "\n Date de publication: " + toString(livre.getDatePublication());
  os << displaybook << std::endl;
  return os;
}

