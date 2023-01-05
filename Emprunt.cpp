#include "Emprunt.h"

Emprunt::Emprunt(std::string firstname, std::string lastname,Auteur Auteur, std::string titre, Genres genre, Langues langue, std::string ISBN, Date datePublication): Person(firstname, lastname),Livre(Auteur,titre,genre,langue,ISBN,datePublication){};
void display(Emprunt& p) {
 std::cout << p.firstname() << " " << p.lastname() << " (" << p.id() << ")\n";
}
/*
Emprunt::Emprunt(Person Person, Livre livre, Date emprunt) {};
  
std::string Emprunt::getFullNameEmprunt() const {
  return _emprunt;
};*/