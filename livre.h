#pragma once
#include "auteur.h"
#include "date.h"
#include <iostream>
/*****************************************************************************************************************************
                                Création d'énumeration de genre et langue d'un livre
**********************************************************************************************************************************/
enum class Genres {
  Science_fiction,
  Action,
  Policier,
  Romance,
  Histoire,
  Réaliste,
  Fantastique,
  Drama,
  Comédie,
  Conte
};

enum class Langues {
  Français,
  Anglais,
  Espagnol,
  Allemand,
  Russe,
  Chinois,
  Japonais,
  Portugais,
  Polonnais
};
/*****************************************************************************************************************************
                                Création Class Livre
**********************************************************************************************************************************/
class Livre {
private:
  Auteur _auteur;
  std::string _titre;
  Genres _genre;
  Langues _langue;
  std::string _ISBN;
  Date _datePublication;
  std::string _newbookgenre;
  std::string _newbooklangue;

public:
/*****************************************************************************************************************************
                                Initialisation des construteur de livre
**********************************************************************************************************************************/
  Livre(Auteur auteur = Auteur("n-000000", " ", " ", "2002, 7, 10"),std::string titre= " ", std::string newbookgenre = " ",std::string newbooklangue= " ",std::string ISBN= " ", Date datePublication = Date(2002, 7, 10));

  Livre(Auteur auteur = Auteur("n-000000", " ", " ", "2002, 7, 10"),
        std::string titre = " ", Genres genre = Genres::Policier,
        Langues langue = Langues::Français, std::string ISBN = " ",
        Date datePublication = Date(2002, 7, 10));
/*****************************************************************************************************************************
                                Création des getters des variables privées
**********************************************************************************************************************************/
  std::string ISBN() const;
  std::string newbookgenre() const;
  std::string newbooklangue()const;
  std::string getTitre() const;

  Auteur getAuteur() const;
  Langues getLangue() const;
  Genres getGenre() const;
  Date getDatePublication() const;

  std::string getISBN() const;
std::string getNewBookGenre() const;
std::string getNewBookLangue() const;

};
/*****************************************************************************************************************************
                                         Création de la commande pour visualiser le livre
**********************************************************************************************************************************/
std::ostream &operator<<(std::ostream &os, const Livre &livre);
/*****************************************************************************************************************************
                               Création de la commande pour visualiser le genre et la langue du livre
**********************************************************************************************************************************/
std::string toStringGenre(Genres g);
std::string toStringLangue(Langues l);

/*****************************************************************************************************************************
                                                     Création d'un test
**********************************************************************************************************************************/
bool isISBN(std::string ISBN);
