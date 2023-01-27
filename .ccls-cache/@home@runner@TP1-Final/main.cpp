
#include "Emprunt.h"
#include "Lecteur.h"
#include "date.h"
#include "livre.h"
#include <assert.h>
#include <iostream>
#include <vector>


/*****************************************************************************************************************************
                                       Commande pour Visualiser le Vecteur <Bliblio>
**********************************************************************************************************************************/
std::ostream &operator<<(std::ostream &os,
                         const std::vector<std::string> &Blilio) {
  os << "\n Blibliothèque: ";
  for (auto number : Blilio)
    os << number << " ";
  os << std::endl;
  return os;
}

int main(int argc, char const *argv[]) {
  int numérodulivre;

  /*****************************************************************************************************************
                                                       Lecteur
  *****************************************************************************************************************/
  Person p1("Tchance", "Ya"); // Objet de type Person
  Person p2("Flavien", "David");
  Person p3("Morganne", "Belle");
  
  /*****************************************************************************************************************
                                                        Auteur
  *****************************************************************************************************************/
  Auteur A1("n-258985", "Jean-Baptiste alias (Molière)", "Poquelin","1622/01/15");
  Auteur A2("n-258875", "Albert", "Camus", "1913/08/07");
  Auteur A3("n-258800", "Joseph", "Jacobs", "1854/08/29");
  Auteur A4("n-258960", "Sarah", "Rivens", "2022/08/12");
  Auteur A5("n-258900", "JEAN ", "DE LA FONTAINE","1684/04/24"); 
  Auteur A6(std::string IDnume, std::string firstname, std::string lastname,
            std::string born);

  /*****************************************************************************************************************
                                                          Livre
  *****************************************************************************************************************/
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

  Livre ajoutelivre(Auteur auteur, std::string titre, std::string newbookgenre,
                    std::string newbooklangue, std::string ISBN,
                    Date datePublicationne);
  /*****************************************************************************************************************
                                                           Emprunt
  *****************************************************************************************************************/
  Date take(2022, 01, 17);
  Date retun(2022, 01, 17);
  retun.returnbook();
  Emprunt emprunt(take, retun);

  Date take1(2022, 01, 28);
  Date retun1(2022, 01, 28);
  retun1.returnbook();
  Emprunt emprunt1(take1, retun1);

  Date take2(2022, 01, 15);
  Date retun2(2022, 01, 15);
  retun2.returnbook();
  Emprunt emprunt2(take2, retun2);

  Date take3(2022, 01, 15);
  Date retun3(2022, 01, 15);
  retun3.returnbook();
  Emprunt emprunt3(take3, retun3);

  Date take4(2022, 01, 15);
  Date retun4(2022, 01, 15);
  retun4.returnbook();
  Emprunt emprunt4(take4, retun4);

  Date take5(2022, 01, 15);
  Date retun5(2022, 01, 15);
  retun5.returnbook();
  Emprunt emprunt5(take5, retun5);
  /*****************************************************************************************************************
                                                Vecteur 
  *****************************************************************************************************************/
  
  std::vector<std::string> AjoutBook;
  std::vector<std::string> Bliblio = {
  
      "\n ", //Position 1 du vecteur
      "\n Le livre numéro: 1 "+ livre.getAuteur().getFullNameAuteur(),
      "\n",
      "\n Titre: " + livre.getTitre(),
      "\n Langue: " + toStringLangue(livre.getLangue()),
      "\n ISBN: " + livre.getISBN(),
      "\n Date de publication: " + toString(livre.getDatePublication()),
  
      "\n**************************************************************************************************"
  
      "\n ",//Position 8 du vecteur
      "\n Le livre numéro: 2 "+ livre1.getAuteur().getFullNameAuteur(),
      "\n",
      "\n Titre: " + livre1.getTitre(),
      "\n Langue: " + toStringLangue(livre1.getLangue()),
      "\n ISBN: " + livre1.getISBN(),
      "\n Date de publication: " + toString(livre1.getDatePublication()),
  
      "\n**************************************************************************************************"
  
      "\n ",//Position 15 du vecteur
      "\n Le livre numéro: 3 " + livre2.getAuteur().getFullNameAuteur(),
      "\n",
      "\n Titre: " + livre2.getTitre(),
      "\n Langue: " + toStringLangue(livre2.getLangue()),
      "\n ISBN: " + livre2.getISBN(),
      "\n Date de publication: " + toString(livre2.getDatePublication()),
      "\n**************************************************************************************************"
      "\n ", //Position 22 du vecteur
      "\n Le livre numéro: 4" + livre3.getAuteur().getFullNameAuteur(),
      "\n",
      "\n Titre: " + livre3.getTitre(),
      "\n Langue: " + toStringLangue(livre3.getLangue()),
      "\n ISBN: " + livre3.getISBN(),
      "\n Date de publication: " + toString(livre3.getDatePublication()),
      "\n**************************************************************************************************"
      "\n ",//Position 29 du vecteur
      "\n Le livre numéro: 5 " + livre4.getAuteur().getFullNameAuteur(),
      "\n",
      "\n Titre: " + livre4.getTitre(),
      "\n Langue: " + toStringLangue(livre3.getLangue()),
      "\n ISBN: " + livre4.getISBN(),
      "\n Date de publication: " + toString(livre4.getDatePublication()),
  
      "\n*************************************************************************************************",
      "\n",


  };

  for (auto it = AjoutBook.begin(); it != AjoutBook.end(); ++it)
    AjoutBook.push_back(*it);

  /*****************************************************************************************************************
                                               Commencement du programme
  *****************************************************************************************************************/
  
  bool disponible = true;
  bool newbook = false;
  bool encoreunnouveaulivre = false;
  int Choix;
  int i = 0;
  std::cout << "\n Bonjour à vous,\n je suis votre guide pour votre recherche "
               "d'ouvrage \n ";
  std::cout << "\n**************************************************************************************************\n";
  
  while (i < 5) {

    std::cout << "\n";
    std::cout
        << "Veuillez choisir l'une des options en saisisant le numéro : \n "
           "1 : Choisir un livre \n OU \n 2 : Ajouter un livre : \n";
    std::cout
        << "\n**************************************************************************************************\n"<<"\n";
    std::cin >> Choix;

/*****************************************************************************************************************
                                        Sécurity ! si on ne met pas : 1 ou 2
****************************************************************************************************************/

    if (Choix > 2) {
      std::cout << "\n Cettte option n'est pas dans la liste de choix"
                << "\n**************************************************************************************************"
                << std::endl;
    } else if (Choix < 1) {
      std::cout << "\n Cettte option n'est pas dans la liste de choix"
                << "\n*********************************************************"
                   "*****************************************"
                << std::endl;
    }

/*****************************************************************************************************************
                                       Choix 1 : Choisir un livre :
***************************************************************************************************************/

    else if (Choix == 1) {

 /*****************************************************************************************************************
                                      Visualiation de la Blibliotheque
 ****************************************************************************************************************/

      std::cout << Bliblio;

/*****************************************************************************************************************
                               Programme pour la disponibilité du livre
***************************************************************************************************************/
      std::cout <<"\n**************************************************************************************************\n"
        << "Pour savoir la disponibilité de votre livre.\n Vueillez saisir le numéro du livre : \n";
      std::cout << "\n";
      std::cin >> numérodulivre;
      std::cout << "\n**************************************************************************************************\n";
      if (numérodulivre == 1 && disponible == true) {
        std::cout <<"Emprunteur : \n"
            << p1.getFullName() << "\n"
            << emprunt << "\n"
            << livre
            << "\n**************************************************************************************************"
            << std::endl;

      } else if (numérodulivre == 2 && disponible == true) {
        std::cout<<"Emprunteur : \n"
            << p2.getFullName() << "\n"
            << emprunt1 << "\n"
            << livre1
            << "\n**************************************************************************************************"
            << std::endl;

      } else if (numérodulivre == 3 && disponible == true) {
        std::cout<<"Emprunteur : \n"
            << p1.getFullName() << "\n"
            << emprunt2 << "\n"
            << livre2
            << "\n**************************************************************************************************"
            << std::endl;

      } else if (numérodulivre == 4 && disponible == true) {
        std::cout<<"Emprunteur : \n"
            << p3.getFullName() << "\n"
            << emprunt3 << "\n"
            << livre3
            << "\n**************************************************************************************************"
            << std::endl;
      
      } else if (numérodulivre == 5 && disponible == true) {
        std::cout<<"Emprunteur : \n"
            << p3.getFullName() << "\n"
            << emprunt3 << "\n"
            << livre4
            << "\n**************************************************************************************************"
            << std::endl;
      
      }else if (numérodulivre == 6 && newbook == true) {
        std::cout
            << "Disponible"
            << "\n"
            << std::endl;
 std::vector<std::string> vec1_cc = {Bliblio.begin()+37, Bliblio.end()}; 
    for (const std::string& i : vec1_cc) {
    std::cout << i << "  ";
      newbook=false;
  }
      } else if (numérodulivre == 7 && newbook == true) {
     std::cout
            << "Disponible"
            << "\n"
            << std::endl;
     std::vector<std::string> vec1_cc = {Bliblio.begin()+38, Bliblio.end()}; 
     for (const std::string& i : vec1_cc) {
     std::cout << i << "  ";
       newbook=false;
  }
      }else if (numérodulivre == 6 && newbook == false) {
        std::cout
            << "Disponible"
            << "\n"
            << std::endl;
 std::vector<std::string> vec1_cc = {Bliblio.begin()+37, Bliblio.end()-1}; 
    for (const std::string& i : vec1_cc) {
    std::cout << i << "  ";
      newbook=true;
  }
    } else {  std::cout
            << "\n N'existe pas"
            << "\n**************************************************************************************************"
            << std::endl;
       } 
    }
  
 /*****************************************************************************************************************
                                  Choix 2 : Pour ajouter un premier livre dans la blibliothèque
****************************************************************************************************************/

  
   if (Choix == 2 && encoreunnouveaulivre==false) {
      std::cout << "\n************************************************************************************************** \n "
                   "Pour ajouter un livre dans la blibliothèque !"
                   "\n Merci de suivre exactement ces instructions ! \n ! Attention ! \n De plus : Remplacer les espaces entre les mots par (_) (ex :Joseph-Jacobs) \n "
                   "\n 1 : L'identité numérique du livre (ex : n-xxxxxx )\n"
                   "\n 2: Le prénom de l'auteur \n"
                   "\n 3: Le nom de l'auteur \n "
                   "\n 4: La date de naissance de l'auteur (ex : xxxx/xx/xx) année/mois/jour \n"
                   "\n 5: Le titre \n "
                   "\n 6: Genre (ex : Conte, Action, Policier ect..)\n"
                   "\n 7: Langue ( ex : Français, Anglais, Espagnol, Allemand "
                   "ect..)\n"
                   "\n 8: ISBN (ex: xxx-x-xxxx-xxxx-x)\n"
                   "\n 9: Date de publication (ex: xxxx/xx/xx) année/mois/jour \n"
                   "\n Merci de votre comprhésion ! \n"
                << "\n*****************************************************************************************************"
                << std::endl;
      std::cout << "\n Start \n";
/*****************************************************************************************************************************
                                                      VARIABLE 
**********************************************************************************************************************************/
      std::string IDnume;
      std::string firstname;
      std::string lastname;
      std::string born;
      std::string titre;
      std::string newbookgenre;
      std::string newbooklangue;
      std::string ISBN;
      std::string datePublicationne;
     
/*****************************************************************************************************************************
                            Affectation des varibles grâces aux données, taper sur le clavier
**********************************************************************************************************************************/
      std::cout << "1) ", std::cin >> IDnume;
      std::cout << "2) ", std::cin >> firstname;
      std::cout << "3) ", std::cin >> lastname;
      std::cout << "4) ", std::cin >> born;
      std::cout << "5) ", std::cin >> titre;
      std::cout << "6) ", std::cin >> newbookgenre;
      std::cout << "7) ", std::cin >> newbooklangue;
      std::cout << "8) ", std::cin >> ISBN;
      std::cout << "9) ", std::cin >> datePublicationne;
     /*****************************************************************************************************************************
                           Définition des constructeurs pour affecter ces variables dans ceci
**********************************************************************************************************************************/
      Auteur A6(IDnume, firstname, lastname, born);
      Livre ajoutelivre(A6, titre, newbookgenre, newbooklangue, ISBN,
                        datePublication);
     
/*****************************************************************************************************************************
                                        Vérification si le livre a bien été crée
**********************************************************************************************************************************/
      std::cout << "\n";
      std::cout << "Création de du livre avec succes ! \n"
                << A6.getFullNameAuteur() << ajoutelivre.getTitre()
                << "\n Genre : " << ajoutelivre.getNewBookGenre()
                << "\n Langue : "
                << ajoutelivre.getNewBookLangue() + "\n ISBN : "
                << ajoutelivre.getISBN() << "\n Date de publication : "
                << toString(ajoutelivre.getDatePublication()) << std::endl;
/*****************************************************************************************************************************
            Commande pour pousser toutes les informations du nouveau livre dans <le vecteur Ajoutbook> ligne #104
**********************************************************************************************************************************/
      AjoutBook.push_back(
         "\n Livre numéro 6 :"  + A6.getFullNameAuteur() +
          "\n Titre : " + ajoutelivre.getTitre() +
          "\n Genre : " + ajoutelivre.getNewBookGenre() +
          "\n Langue : " + ajoutelivre.getNewBookLangue() +
          "\n ISBN : " + ajoutelivre.getISBN() + "\n Date de publication : " +toString(ajoutelivre.getDatePublication())+
        "\n********************************************************************************************\n");

     
/*****************************************************************************************************************************
Commande pour inseré <le vecteur AjoutBook> dans <Le vecteur Bliblio> pour visualiser les données d'un livre ajouter dans le vecteur <Bliblio>
**********************************************************************************************************************************/
      Bliblio.insert(Bliblio.end(), AjoutBook.begin(), AjoutBook.end());
     
/*****************************************************************************************************************************
Commande .clear permet d'nitialiser le vecteur <AjoutBook> et de sauvegarder les données du AjoutBook dans le vecteur <Bliblio>
**********************************************************************************************************************************/     
      AjoutBook.clear();
      newbook=true;
     encoreunnouveaulivre=true;
/*****************************************************************************************************************************
                                   Commande pour afficher le nouveau vecteur <Bliblio>
**********************************************************************************************************************************/
      std::cout << "\n********************************************************************************************"<< Bliblio;
      std::cout << "\n********************************************************************************************\n";
     
    } 
    /*****************************************************************************************************************
                                  Choix 2 : Pour ajouter un deuxième livre dans la blibliothèque
****************************************************************************************************************/
   else if (Choix==2 && encoreunnouveaulivre==true) {
           std::cout << "\n************************************************************************************************** \n "
                   "Pour ajouter un livre dans la blibliothèque !"
                   "\n Merci de suivre exactement ces instructions ! \n ! Attention ! \n De plus : Remplacer les espaces entre les mots par (_) (ex :Joseph-Jacobs) \n "
                   "\n 1 : L'identité numérique du livre (ex : n-xxxxxx )\n"
                   "\n 2: Le prénom de l'auteur \n"
                   "\n 3: Le nom de l'auteur \n "
                   "\n 4: La date de naissance de l'auteur (ex : xxxx/xx/xx) année/mois/jour \n"
                   "\n 5: Le titre \n "
                   "\n 6: Genre (ex : Conte, Action, Policier ect..)\n"
                   "\n 7: Langue ( ex : Français, Anglais, Espagnol, Allemand "
                   "ect..)\n"
                   "\n 8: ISBN (ex: xxx-x-xxxx-xxxx-x)\n"
                   "\n 9: Date de publication (ex: xxxx/xx/xx) année/mois/jour \n"
                   "\n Merci de votre comprhésion ! \n"
                << "\n*****************************************************************************************************"
                << std::endl;
      std::cout << "\n Start \n";
/*****************************************************************************************************************************
                                                      VARIABLE 
**********************************************************************************************************************************/
      std::string IDnume;
      std::string firstname;
      std::string lastname;
      std::string born;
      std::string titre;
      std::string newbookgenre;
      std::string newbooklangue;
      std::string ISBN;
      std::string datePublicationne;
     
/*****************************************************************************************************************************
                            Affectation des varibles grâces aux données, taper sur le clavier
**********************************************************************************************************************************/
      std::cout << "1) ", std::cin >> IDnume;
      std::cout << "2) ", std::cin >> firstname;
      std::cout << "3) ", std::cin >> lastname;
      std::cout << "4) ", std::cin >> born;
      std::cout << "5) ", std::cin >> titre;
      std::cout << "6) ", std::cin >> newbookgenre;
      std::cout << "7) ", std::cin >> newbooklangue;
      std::cout << "8) ", std::cin >> ISBN;
      std::cout << "9) ", std::cin >> datePublicationne;
     /*****************************************************************************************************************************
                           Définition des constructeurs pour affecter ces variables dans ceci
**********************************************************************************************************************************/
      Auteur A7(IDnume, firstname, lastname, born);
      Livre ajoutelivre(A7, titre, newbookgenre, newbooklangue, ISBN,
                        datePublication);
     
/*****************************************************************************************************************************
                                        Vérification si le livre a bien été crée
**********************************************************************************************************************************/
      std::cout << "\n";
      std::cout << "Création de du livre avec succes ! \n"
                << A7.getFullNameAuteur() << ajoutelivre.getTitre()
                << "\n Genre : " << ajoutelivre.getNewBookGenre()
                << "\n Langue : "
                << ajoutelivre.getNewBookLangue() + "\n ISBN : "
                << ajoutelivre.getISBN() << "\n Date de publication : "
                << toString(ajoutelivre.getDatePublication()) << std::endl;
/*****************************************************************************************************************************
            Commande pour pousser toutes les informations du nouveau livre dans <le vecteur Ajoutbook> ligne #104
**********************************************************************************************************************************/
      AjoutBook.push_back(
         "\n Livre numéro 7 :"  + A7.getFullNameAuteur() +
          "\n Titre : " + ajoutelivre.getTitre() +
          "\n Genre : " + ajoutelivre.getNewBookGenre() +
          "\n Langue : " + ajoutelivre.getNewBookLangue() +
          "\n ISBN : " + ajoutelivre.getISBN() + "\n Date de publication : " +toString(ajoutelivre.getDatePublication())+
        "\n********************************************************************************************\n");

     
/*****************************************************************************************************************************
Commande pour inseré <le vecteur AjoutBook> dans <Le vecteur Bliblio> pour visualiser les données d'un livre ajouter dans le vecteur <Bliblio>
**********************************************************************************************************************************/
      Bliblio.insert(Bliblio.end(), AjoutBook.begin(), AjoutBook.end());
     
/*****************************************************************************************************************************
Commande .clear permet d'nitialiser le vecteur <AjoutBook> et de sauvegarder les données du AjoutBook dans le vecteur <Bliblio>
**********************************************************************************************************************************/     
      AjoutBook.clear();
      newbook=true;
     encoreunnouveaulivre=true;
/*****************************************************************************************************************************
                                   Commande pour afficher le nouveau vecteur <Bliblio>
**********************************************************************************************************************************/
      std::cout << "\n********************************************************************************************"<< Bliblio;
      std::cout << "\n********************************************************************************************\n";
     
    }
    }
  
}
