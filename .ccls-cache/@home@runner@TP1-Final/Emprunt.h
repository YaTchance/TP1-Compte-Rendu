#include <iostream>


class Emprunt {

private:
      //Date _next3days;
      //Livre _livre;
      std::string _takebook;
      std::string _returnbook;
        
public:

  Emprunt(std::string takebook, std::string returnbook);

  std::string takebook() const;
  std::string returnbook() const;
  //Livre livre() const;
  std::string getEmprunt() const;
  std::string getTakebook() const;
  std::string getReturnbook() const;

  };