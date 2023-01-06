
#include <iostream>
#include "livre.h"
#include "date.h"
#include <regex>
#include <cassert> 

 Livre::Livre(Auteur auteur, std::string titre, Genres genre, Langues langue, std::string ISBN, Date datePublication, int complet){
  bool status = isISBN(ISBN);
  assert(status && "ISBN is not valid");
 _auteur = auteur;
  _titre = titre;
   _genre = genre;
  _langue = langue;
  _ISBN = ISBN;
  _complet = complet;
  _datePublication = datePublication;
}

std::string toStringGenre(Genres g) {
switch (g)
{
case Genres::Science_fiction:
return "Science_fiction";
break;
case Genres::Action:
return "Action";
break;
case Genres::Policier:
return "Policier";
break;
case Genres::Histoire:
return "Histoire";
break;
case Genres::Réaliste:
return "Réaliste";
break;
case Genres::Romance:
return "Romance";
break;
case Genres::Fantastique:
return "Fantastique";
break;
case Genres::Drama:
return "Drama";
break;
default:
break;
}
}

std::string toStringLangue(Langues l) {
switch (l)
{
case Langues::Français:
return "Français";
break;
case Langues::Anglais:
return "Anglais";
break;
case Langues::Allemand:
return "Allemand";
break;
case Langues::Espagnol:
return "Espagnol";
break;
case Langues::Chinois:
return "Chinois";
break;
case Langues::Russe:
return "Russe";
break;
case Langues::Japonais:
return "Japonais";
break;
case Langues::Portugais:
return "Portugais";
break;
case Langues::Polonnais:
return "Polonnais";
break;
default:
break;
}
}

bool isISBN(std::string ISBN){
  if (regex_match (ISBN, std::regex("^[0-9]{3}(-)[0-9](-)[0-9]{4}(-)[0-9]{4}(-)[0-9]")))
    return true;
  else 
    return false;
}




 std::ostream& operator<<(std::ostream& os, const Livre& livre)  {

   std::string display= "\n Le livre Emprunté: \n Auteur: "+livre.getAuteur().getFullNameAuteur()+ "\n Titre: "+ livre.getTitre() + "\n Genre: "+ toStringGenre(livre.getGenre()) + "\n Langue: "+ toStringLangue(livre.getLangue()) + "\n ISBN: "+ livre.getISBN() + "\n Date de publication: "+ toString(livre.getDatePublication());
   /*
   std::cout <<  "\n"
            << "Titre : " << livre.getTitre() <<"\n"
            << "Genre : " << toStringGenre(livre.getGenre()) << "\n"
            << "Langue : " << toStringLangue(livre.getLangue()) << "\n"
            << "ISBN : " << livre.getISBN() << "\n"
            << "Date de publication : " << toString(livre.getDatePublication()) << "\n"<< std::endl;*/

        os << display << std::endl;
        return os;
}

   

/*Récapitulatif ! Tout fonctionne jusqu'a l'auteur, il manque juste la class emprunt + la class bliblio*/ 