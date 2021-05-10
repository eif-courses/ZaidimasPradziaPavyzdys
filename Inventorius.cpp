//
// Created by Marius on 5/10/2021.
//
#include "Inventorius.h"


  Inventorius::Inventorius(){}
  Inventorius::Inventorius(int id){
    Inventorius::id = id;
  }
  Inventorius::Inventorius(int i, string pavadinimas){
    Inventorius::id = i;
    this->pavadinimas = pavadinimas;
  }

  void Inventorius::SetPavadinimas(const string &pavadinimas) {
    Inventorius::pavadinimas = pavadinimas;
  }

  const string &Inventorius::GetPavadinimas() const {
    return pavadinimas;
  }
  int Inventorius::GetId(){
    return id;
  }



