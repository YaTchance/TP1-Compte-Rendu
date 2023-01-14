#include <iostream>
#include <vector>

class Bliblio {
private:
  std::vector<std::string> _livre;
  std::vector<std::string> _auteur;
  std::vector<std::string> _lecteur;

public:
Bliblio(std::string livre, std::string auteur, std::string lecteur);

};

std::ostream &operator<<(std::ostream &os,const std::vector<std::string> &livre);
std::ostream &operator<<(std::ostream &os,const std::vector<std::string> &auteur);
std::ostream &operator<<(std::ostream &os,const std::vector<std::string> &lecteur);