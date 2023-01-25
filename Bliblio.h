#include <iostream>
#include <vector>

class Bliblio {
private:
  std::vector<std::string> _livre;
  std::vector<std::string> _auteur;
  std::vector<std::string> _lecteur;

public:
Bliblio(std::string livre, std::string auteur, std::string lecteur);
Newbook(Auteur auteur = Auteur("n-000000", " ", " ", "2002, 7, 10"),std::string titre = " ", std::string newbookgenre = " ",std::string newbooklangue = " ",std::string ISBN = " ",
        Date datePublication = Date(2002, 7, 10));
};

std::ostream &operator<<(std::ostream &os,const std::vector<std::string> &livre);
std::ostream &operator<<(std::ostream &os,const std::vector<std::string> &auteur);
std::ostream &operator<<(std::ostream &os,const std::vector<std::string> &lecteur);