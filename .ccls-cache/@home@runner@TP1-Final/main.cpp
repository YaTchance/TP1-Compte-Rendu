
#include "Emprunt.h"
#include "Lecteur.h"
#include "date.h"
#include "livre.h"
#include <assert.h>
#include <iostream>
#include <vector>

std::ostream &operator<<(std::ostream &os,
                         const std::vector<std::string> &Blilio) {
  os << "Blibliothèque: ";
  for (auto number : Blilio)
    os << number << " ";
  os << std::endl;
  return os;
}

int main(int argc, char const *argv[]) {
  int numérodulivre;

  /*****************************************************************************************************************/
  // Lecteur
  /*****************************************************************************************************************/
  Person p1("Tchance", "Ya"); // Objet de type Person
  Person p2("Flavien", "David");
  Person p3("Morganne", "Belle");

  /*****************************************************************************************************************/
  // Auteur
  /*****************************************************************************************************************/
  Auteur A1("n-258985", "Molière", "", "1622/01/15");
  Auteur A2("n-258875", "Albert", "Camus", "1913/08/07");
  Auteur A3("n-258800", "Joseph", "Jacobs", "1854/08/29");
  Auteur A4("n-258960", "Sarah", "Rivens", "2022/08/12");
  Auteur A5("n-258900", "JEAN ", "DE LA FONTAINE",
            "1684/04/24"); // 24 avril 1684
  Auteur A6(std::string IDnume, std::string firstname, std::string lastname,
            std::string born);

  /*****************************************************************************************************************/
  // Emprunt
  /*****************************************************************************************************************/
  Date take(2022, 12, 10);
  Date retun(2022, 12, 10);
  retun.returnbook();
  Emprunt emprunt(take, retun);

  Date take1(2002, 10, 8);
  Date retun1(2002, 10, 8);
  retun1.returnbook();
  Emprunt emprunt1(take1, retun1);

  Date take2(2023, 10, 15);
  Date retun2(2002, 10, 15);
  retun2.returnbook();
  Emprunt emprunt2(take2, retun2);

  Date take3(2023, 10, 15);
  Date retun3(2023, 10, 15);
  retun3.returnbook();
  Emprunt emprunt3(take1, retun3);
  /*****************************************************************************************************************/
  // Livre
  /*****************************************************************************************************************/
  Date datePublication(1968, 9, 8);
  Livre livre(A1, "L'avare", Genres::Comédie, Langues::Français,
              "978-2-7454-9010-0", datePublication);

  Date datePublication1(2002, 7, 10);
  Livre livre1(A2, "L'Étranger", Genres::Romance, Langues::Français,
               "978-2-7454-9020-0", datePublication1);

  Date datePublication3(1890, 6, 15);
  Livre livre2(A3, "Three Little Pigs", Genres::Conte, Langues::Anglais,
               "978-2-7454-9030-0", datePublication3);

  Date datePublication4(2022, 8, 24);
  Livre livre3(A4, "Captive", Genres::Romance, Langues::Français,
               "978-2-7454-9040-0", datePublication4);
  // 27/08/2003
  Date datePublication5(2003, 8, 27);
  Livre livre4(A5, "FABLES", Genres::Conte, Langues::Français,
               "978-2-7454-9050-0", datePublication4);

  // Date datePublication5(2022, 8, 24);
  Livre livre6(A5, "FABLES", Genres::Conte, Langues::Français,
               "978-2-7454-9050-0", datePublication4);
  /*****************************************************************************************************************/
  // Vecteur Blibliothèque
  /*****************************************************************************************************************/
  std::vector<std::string> Bliblio = {
      "\n ",
      "Le livre numéro: 1 \n",
      "\n Auteur: " + livre.getAuteur().getFullNameAuteur(),
      "\n Titre: " + livre.getTitre(),
      "\n Langue: " + toStringLangue(livre.getLangue()),
      "\n ISBN: " + livre.getISBN(),
      "\n Date de publication: " + toString(livre.getDatePublication()),

      "\n ",
      "Le livre numéro: 2 \n",
      "\n Auteur: " + livre1.getAuteur().getFullNameAuteur(),
      "\n Titre: " + livre1.getTitre(),
      "\n Langue: " + toStringLangue(livre1.getLangue()),
      "\n ISBN: " + livre1.getISBN(),
      "\n Date de publication: " + toString(livre1.getDatePublication()),

      "\n ",
      "Le livre numéro: 3 \n",
      "\n Auteur: " + livre2.getAuteur().getFullNameAuteur(),
      "\n Titre: " + livre2.getTitre(),
      "\n Langue: " + toStringLangue(livre2.getLangue()),
      "\n ISBN: " + livre2.getISBN(),
      "\n Date de publication: " + toString(livre2.getDatePublication()),

      "\n ",
      "Le livre numéro: 4 \n",
      "\n Auteur: " + livre3.getAuteur().getFullNameAuteur(),
      "\n Titre: " + livre3.getTitre(),
      "\n Langue: " + toStringLangue(livre3.getLangue()),
      "\n ISBN: " + livre3.getISBN(),
      "\n Date de publication: " + toString(livre3.getDatePublication()),

      "\n ",
      "Le livre numéro: 5 \n",
      "\n Auteur: " + livre4.getAuteur().getFullNameAuteur(),
      "\n Titre: " + livre4.getTitre(),
      "\n Langue: " + toStringLangue(livre3.getLangue()),
      "\n ISBN: " + livre4.getISBN(),
      "\n Date de publication: " + toString(livre4.getDatePublication()),

  };

  std::vector<std::string> AjoutBook;
  for (auto it = Bliblio.begin(); it != Bliblio.end(); ++it)
    AjoutBook.push_back(*it);

  /*****************************************************************************************************************/
  // Start du programme
  /*****************************************************************************************************************/
  bool disponible = true;
  int Choix;
  int i;
  std::cout << "\n Bonjour à vous,\n je suis votre guide pour votre recherche "
               "d'ouvrage \n ";
  while (i < 5) {

    std::cout << "\n";
    std::cout
        << "Veuillez choisir l'une des options en saisisant le numéro : \n "
           "1 : Choisir un livre \n OU \n 2 : Ajouter un livre : \n";
    std::cout << "\n";
    std::cin >> Choix;

    if (Choix == 1) {
      /*****************************************************************************************************************/
      // Domaine Blibliotheque
      /*****************************************************************************************************************/

      std::cout << "\n Livre numéro 1: " << livre << "\n" << std::endl;
      std::cout << "\n Livre numéro 2: " << livre1 << "\n" << std::endl;
      std::cout << "\n Livre numéro 3: " << livre2 << "\n" << std::endl;
      std::cout << "\n Livre numéro 4: " << livre3 << "\n" << std::endl;
      std::cout << "\n Livre numéro 5: " << livre4 << "\n" << std::endl;
      // std::cout << "\n Livre numéro 4: " << livre6 << "\n" << std::endl;

      /****************************************************************************************************************/

      std::cout << "Pour savoir la disponibilité de votre livre.\n Vueillez "
                   "saisir le numéro du livre : \n";
      std::cout << "\n";
      std::cin >> numérodulivre;
      std::cout << "\n";
      if (numérodulivre == 1 && disponible == true) {
        std::cout << p1.getFullName() << "\n"
                  << emprunt << "\n"
                  << livre << "\n"
                  << std::endl;

      } else if (numérodulivre == 2 && disponible == true) {
        std::cout << p2.getFullName() << "\n"
                  << emprunt1 << "\n"
                  << livre1 << "\n"
                  << std::endl;

      } else if (numérodulivre == 3 && disponible == true) {
        std::cout << p1.getFullName() << "\n"
                  << emprunt2 << "\n"
                  << livre2 << "\n"
                  << std::endl;

      } else if (numérodulivre == 4 && disponible == true) {
        std::cout << p3.getFullName() << "\n"
                  << emprunt3 << "\n"
                  << livre3 << "\n"
                  << std::endl;
      } else if (numérodulivre == 5 && disponible == true) {
        std::cout << p3.getFullName() << "\n"
                  << emprunt3 << "\n"
                  << livre4 << "\n"
                  << std::endl;
      } else {
        std::cout << "n'est pas disponible" << std::endl;
      }

    } else {
      std::cout
          << "Pour ajouter un auteur dans la blibliothèque ! \n Vueillez "
             "suivre ces instructions ! \n \n 1 : L'identité numérique du "
             "livre , notée : n-xxxxxx (avoir la même syntaxe sinon cela "
             "ne vas pas marcher) \n \n 2: Le prénom de l'auteur \n \n 3: "
             "Le nom de l'auteur \n \n 4: La date de naissance de "
             "l'auteur, noté : xxxx/xx/xx (avoir la même syntaxe sinon "
             "cela ne vas pas marcher) \n \n Merci de votre comprhésion ! \n \n"
          << std::endl;

      std::string IDnume;
      std::string firstname;
      std::string lastname;
      std::string born;
      std::string titre;
      std::string genre;
      std::string langue;
      std::string ISBN;
      std::string datePublication;

      std::cin >> IDnume >> firstname >> lastname >> born >> titre >> genre >>
          langue >> ISBN >> datePublication;
      Auteur A6(IDnume, firstname, lastname, born);
      //Livre livre(Auteur auteur, std::string titre, Genres genre,  Langues langue, std::string ISBN, Date datePublication);

      std::cout << "\n";
      std::cout << "Création de l'auteur avec succes ! \n"
                << A6.getFullNameAuteur() << std::endl;
      // AjoutBook.push_back(A5);
      std::cout << "\n";

      AjoutBook.push_back(
          "\n" + A6.getFullNameAuteur()/*livre6.getAuteur().getFullNameAuteur() + livre6.getTitre() +
          toStringLangue(livre6.getLangue()) + livre6.getISBN() +
          toString(livre6.getDatePublication())*/);
      std::cout << AjoutBook;
      // i++;
    }
    //}
  }

}
