#include <string>
class Person{
public:
  Person(std::string firstname, std::string lastname);
  
  std::string firstname() const;
  std::string lastname() const;
  std::string getFullName() const;

private:
  std::string _firstname;
  std::string _lastname;
};