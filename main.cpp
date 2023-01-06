
#include "Lecteur.h"
#include "date.h"
#include "livre.h"
#include <assert.h>
#include <iostream>


int main(int argc, char const *argv[]) {

  Person p1("Tchance", "Ya"); // Objet de type Person
  Person p2("Flavien", "David");

  Date born(2002, 7, 10);
  Auteur A1("n-123456", "Tchance", "Siong");

  Date datePublication(2002, 7, 10);
 Livre livre(A1, "Sans un mot", Genres::Policier, Langues::Français,
              "978-2-7454-9012-0", datePublication, 1);
  Date datePublication1(2002, 7, 10);
  Livre livre1(A1, "Sans un mot", Genres::Policier, Langues::Français,
               "978-2-7454-9012-0", datePublication1, 1);

  // Date emprunt(2005/02/05);
  // Emprunt E( livre1 );

  // std::cout << E.getLivre << std::endl;
  std::cout << "Lecteur - " << p1.getFullName() << std::endl;
   std::cout << livre1 << std::endl;
  /*std::cout << "Le livre Emprunté: \n"
            << "Auteur : " << A1.getFullNameAuteur()<< " " <<
     toString(A1.getBorn()) <<  "\n"
            << "Titre : " << livre.getTitre() <<"\n"
            << "Genre : " << toStringGenre(livre.getGenre()) << "\n"
            << "Langue : " << toStringLangue(livre.getLangue()) << "\n"
            << "ISBN : " << livre.getISBN() << "\n"
            << "Date de publication : " << toString(livre.getDatePublication())
     << "\n"
            << std::endl;*/
  // std::cout << "Auteur n1 :" << A1.getFullNameAuteur() << std::endl;

  return 0;
}
