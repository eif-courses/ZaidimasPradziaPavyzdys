//
// Created by Marius on 5/10/2021.
//

#include "Parduotuve.h"

Parduotuve::Parduotuve(const string &pavadinimas) : pavadinimas(pavadinimas) {}

const string &Parduotuve::GetPavadinimas() const {
  return pavadinimas;
}

const vector<string> &Parduotuve::GetPrekes() const {
  return prekes;
}

void Parduotuve::Ideti(string preke) {
  if (preke.empty()) {
    cout << "Be pavadinimo prekes neegzsituoja! NEPAVYKO!" << endl;
  } else {
    this->prekes.emplace_back(preke);
    cout << "Sekmingai ideta i sarasa! " <<preke << endl;
  }
}
