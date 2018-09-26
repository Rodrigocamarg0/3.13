// Trabalho 1 - Prog2 - 4.30
// Rodrigo Nunes Camargo
// Arthur Lima


#include <iostream>
#include <math.h>


using namespace std;

int main() {

double D;
double C;
double A;
double r;
double pi = 3.14159;


  cout << "Informe o raio! (m)\n";
   cin >> r;
   
   cout << " Diâmetro:  ";
   D = r*2;
   cout << D << " m" << endl;

  cout << " Área:  ";
   A = pow(r,2)*pi;
   cout << A << " m^2" << endl;
   
  cout << " Circunferęncia:  ";
   C = (2*pi)*r;
   cout << C << " m";

return 0;

}
