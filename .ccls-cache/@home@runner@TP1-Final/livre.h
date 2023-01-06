#pragma once
#include <iostream>
#include "date.h"
#include "auteur.h"

enum class Genres{
        Science_fiction, Action, Policier, Romance, Histoire, Réaliste, Fantastique, Drama
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
int _complet;

public:
  Livre(Auteur auteur = Auteur("n-000000", " ", " "), std::string titre = " ", Genres genre = Genres::Policier, Langues langue = Langues::Français, std::string ISBN = " ", Date datePublication = Date(2002, 7, 10), int complet = 0);

  std::string ISBN() const;
  std::string getTitre() const { 
        return _titre;}
	Auteur getAuteur() const { 
	  return _auteur;}
	Langues getLangue() const { 
	    return _langue;}
	Genres getGenre() const { 
	    return _genre;}

	Date getDatePublication() const { 
	    return _datePublication;}

	std::string getISBN() const { 
	    return _ISBN;}

  
};
std::ostream& operator<<(std::ostream& os, const Livre& livre);  


std::string toStringGenre(Genres g);
std::string toStringLangue(Langues l);

bool isISBN(std::string ISBN);
