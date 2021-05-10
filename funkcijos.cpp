//
// Created by Marius on 5/10/2021.
//
#include "funkcijos.h"

int suma(int a, int b){
  return a + b;
}
void dalyba(int daliklis){
  int temp = suma(10,40) / daliklis;
  spausdinti(to_string(temp));
}
void spausdinti(string tekstas){
  cout << tekstas << endl;
}