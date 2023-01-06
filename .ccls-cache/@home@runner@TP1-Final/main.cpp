
#include "Lecteur.h"
#include "date.h"
#include "livre.h"
#include <assert.h>
#include <iostream>
#include "Emprunt.h"


int main(int argc, char const *argv[]) {

  Person p1("Tchance", "Ya"); // Objet de type Person
  Person p2("Flavien", "David");


  Auteur A1("n-258985", "Molière", "","1622/01/15");
  Auteur A2("n-258875", "Albert", "Camus","1913/08/07");
  
  Date datePublication(1968, 9, 8);
  Livre livre(A1, "L'avare", Genres::Comédie, Langues::Français,"978-2-7454-9012-0", datePublication);
  
  Date datePublication1(2002, 7, 10);
  Livre livre1(A2, "L'Étranger", Genres::Romance, Langues::Français,"978-2-7454-9012-0", datePublication1);
  Emprunt Emprunt("06/10/41","08/08/08");

  std::cout << "Emprunt - " << Emprunt.getEmprunt() << std::endl;
   std::cout << "Lecteur - " << p1.getFullName() << std::endl;
   std::cout << livre << "\n" << std::endl;

  std::cout << "Lecteur - " << p2.getFullName() << std::endl;
   std::cout << livre1 << std::endl;

  return 0;
}
