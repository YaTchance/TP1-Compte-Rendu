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
  //std::string _auteur;
  std::string _titre;
  Genres _genre;
  Langues _langue;
  std::string _ISBN;
  Date _datePublication;

public:
  Livre(Auteur Auteur, std::string titre, Genres genre, Langues langue, std::string ISBN, Date datePublication);

  std::string ISBN() const;
  std::string getTitre() const { 
        return _titre;}
	//std::string getAuteur() const { 
	  //  return _auteur;}
	Langues getLangue() const { 
	    return _langue;}
	Genres getGenre() const { 
	    return _genre;}

	Date getDatePublication() const { 
	    return _datePublication;}

	std::string getISBN() const { 
	    return _ISBN;}

  void display(Livre);
};
    
std::string toStringGenre(Genres g);
std::string toStringLangue(Langues l);

bool isISBN(std::string ISBN);