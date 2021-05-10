//
// Created by Marius on 5/10/2021.
//

#ifndef ZAIDIMASPRADZIAPAVYZDYS_INVENTORIUS_H
#define ZAIDIMASPRADZIAPAVYZDYS_INVENTORIUS_H
#include <iostream>
using namespace std;


class Inventorius{ // Inkapsuliacija
private:
  string slaptazodis;
  int id;
  string pavadinimas;
  int tinklelis[11][11];
public:
  Inventorius();
  Inventorius(int id);
  Inventorius(int i, string pavadinimas);
  void SetPavadinimas(const string &pavadinimas);
  const string &GetPavadinimas() const;
  int GetId();
  void spausdintiSLaptazodi(string s);

};
#endif //ZAIDIMASPRADZIAPAVYZDYS_INVENTORIUS_H
