
#include "Emprunt.h"
#include "Lecteur.h"
#include "date.h"
#include "livre.h"
#include <assert.h>
#include <iostream>

int main(int argc, char const *argv[]) {

  Person p1("Tchance", "Ya"); // Objet de type Person
  Person p2("Flavien", "David");

  Auteur A1("n-258985", "Molière", "", "1622/01/15");
  Auteur A2("n-258875", "Albert", "Camus", "1913/08/07");

  Date take(1968, 9, 8);
  Date retun(1968, 9, 10);
  retun.returnbook();
  Emprunt emprunt(take, retun);

  Date take1(2002, 10, 8);
  Date retun1(2002, 9, 12);
  retun1.returnbook();
  Emprunt emprunt1(take1, retun1);

  Date datePublication(1968, 9, 8);
  Livre livre(A1, "L'avare", Genres::Comédie, Langues::Français,
              "978-2-7454-9012-0", datePublication);

  Date datePublication1(2002, 7, 10);
  Livre livre1(A2, "L'Étranger", Genres::Romance, Langues::Français,
               "978-2-7454-9012-0", datePublication1);
  
  std::cout <<emprunt << "\n Lecteur : " << p1.getFullName() << "\n"<< livre << "\n" << std::endl;

  std::cout << emprunt1 << "Lecteur - " << p2.getFullName() << "\n"<< livre1 << std::endl;

  return 0;
}
