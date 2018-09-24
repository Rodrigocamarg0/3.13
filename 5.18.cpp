// Trabalho 1 - Prog2 - 5.18
// Rodrigo Nunes Camargo
// Arthur Lima

#include <iostream>

using namespace std;

int octal(int);
void binario(int);
void hexa(int);
int binaryNum[10]; 
int hexNum[2]; 


int main() {

  int i;
  cout << "--> Decimal" << endl;
  cout <<  "|  --> Octal" << endl;
  cout <<  "|  |  --> Binario" << endl;
  cout <<  "|  |  |          --> Hexadecimal" << endl;
  cout <<  "|  |  |          |" << endl;

  for(i=1; i <= 256; i++){
    cout << i <<": " << octal(i) <<"; ";
    binario(i); 
    cout <<"; ";
    hexa(i);
    cout << endl;
}


}
int octal(int dec)
{
  int a=1;
    int rem, octa = 0;
    while (dec != 0)
    {
        rem = dec % 8;
        dec /= 8;
        octa += rem * a;
        a *= 10;
    }
    return octa;
}


void binario(int dec) 
{ 
    int b = 0; 
    while (dec > 0) { 
        binaryNum[b] = dec % 2; 
        dec = dec / 2; 
        b++; 
    } 
    for (int j = 8; j >= 0; j--) {
        cout << binaryNum[j]; }
}


void hexa(int dec) 
{ 
    int y;
    int b = 0; 
    while (dec > 0) { 
        hexNum[b] = dec % 16; 
        dec = dec / 16; 
        b++; 
       }
       
   for (b=1;b >= 0; b--)
    {
        y = hexNum[b];

        if (y==10)
            cout << 'A';
        else if (y==11)
            cout << 'B';
        else if (y==12)
            cout << 'C';
        else if (y==13)
            cout << 'D';
        else if (y==14)
            cout << 'E';
        else if (y==15)
            cout << 'F';
        else
            cout << y;
    }
}