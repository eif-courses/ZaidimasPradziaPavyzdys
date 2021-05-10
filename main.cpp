#include "funkcijos.h"
#include "Inventorius.h"
#include "Parduotuve.h"
int main() {


  Parduotuve maxima("Maxima");

  maxima.Ideti("Cukrus Panevezio");
  maxima.Ideti("Druska Optima linija");
  maxima.Ideti("Alus Volfas engelman");
  maxima.Ideti("Ledai Pols");
  maxima.Ideti("");


//  for(const auto& preke: maxima.GetPrekes()){
//    cout << preke << endl;
//  }

  Inventorius pirmas;
  Inventorius in(1111);
  in.SetPavadinimas("Naujausias inventorius");


  string ivedimas;



  Inventorius inventorius(211, ivedimas);

  cout << "mano id: " << inventorius.GetId() << endl;
  inventorius.spausdintiSLaptazodi(inventorius.GetPavadinimas());


  dalyba(5);





  for (int i = 0; i < maxima.GetPrekes().size(); ++i) {
    cout << (i+1) <<". "<< maxima.GetPrekes()[i] << endl;
  }
  int indekas;
  cout << "Pasirinkite preke:";
  cin >> indekas;

  auto prekes = maxima.GetPrekes();
  cout << "Jus pasirinkote preke: " << prekes[indekas-1] << endl;

  inventorius.SetPavadinimas(prekes[indekas-1]);









  return 0;
}



