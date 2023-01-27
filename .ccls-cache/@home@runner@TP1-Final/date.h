#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
public:
  Date(int year = 1, int month = 1, int day = 1);  //Rajout de la varibale "Année"
  int month() const;
  int day() const;
  int year() const;
  void updateMonth(int month);
  void updateDay(int day);
  void updateYear(int year);
  void returnbook(); //Rajout de cette fonction pour la date retour du livre de 2 semaines.
  void back();

private:
  int _year;
  int _month;
  int _day;
};

bool isDate(int year, int month, int day);
int getDaysInMonth(int month);
int dayOfYear(Date d);
std::string toString(Date d);

#endif // DATE_H


