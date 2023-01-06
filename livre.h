#pragma once
#include <iostream>
#include "date.h"
#include "auteur.h"

enum class Genres{
        Science_fiction, Action, Policier, Romance, Histoire, Réaliste, Fantastique, Drama, Comédie
    };

enum class Langues{
        Français, Anglais, Espagnol, Allemand, Russe, Chinois, Japonais, Portugais, Polonnais
    };

class Livre
{
private:
  Auteur _auteur;
  std::string _titre;
  Genres _genre;
  Langues _langue;
  std::string _ISBN;
  Date _datePublication;


public:
  Livre(Auteur auteur = Auteur("n-000000", " ", " ", "2002, 7, 10"), std::string titre = " ", Genres genre = Genres::Policier, Langues langue = Langues::Français, std::string ISBN = " ", Date datePublication = Date(2002, 7, 10));

  std::string ISBN() const;

  std::string getTitre() const;

	Auteur getAuteur() const ;

	Langues getLangue() const ;

	Genres getGenre() const;

	Date getDatePublication() const;

	std::string getISBN() const;

  
};
std::ostream& operator<<(std::ostream& os, const Livre& livre);  


std::string toStringGenre(Genres g);
std::string toStringLangue(Langues l);

bool isISBN(std::string ISBN);
