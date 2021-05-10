//
// Created by Marius on 5/10/2021.
//

#ifndef ZAIDIMASPRADZIAPAVYZDYS_PARDUOTUVE_H
#define ZAIDIMASPRADZIAPAVYZDYS_PARDUOTUVE_H
#include <iostream>
#include <vector>
using namespace std;

class Parduotuve {
private:
  string pavadinimas;
  vector<string> prekes;
public:
  Parduotuve(const string &pavadinimas);
  const string &GetPavadinimas() const;
  const vector<string> &GetPrekes() const;
  void Ideti(string preke);

};


#endif //ZAIDIMASPRADZIAPAVYZDYS_PARDUOTUVE_H
