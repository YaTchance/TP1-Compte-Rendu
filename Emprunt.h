#include <iostream>
#include "livre.h"
#include "Lecteur.h"

class Emprunt : public Livre, public Person {
public:
  Emprunt(std::string firstname, std::string lastname,Auteur Auteur, std::string titre, Genres genre, Langues langue, std::string ISBN, Date datePublication);


private:
        std::string _disponible;
        Date _emprunt;
        
  };
       /* Emprunt(Person Person, Livre Livre, Date emprunt ); */
   /*  Date getEmprunt() const {
                         return _emprunt;
                          };
std::string getFullNameEmprunt() const;
std::string disponible() const;
};   
std::string toStringDispo (std::string disponible);*/